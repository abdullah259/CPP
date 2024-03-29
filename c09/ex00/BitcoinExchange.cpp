#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string file_input) : fileStream(file_input.c_str()), database("data.csv")
{
    if (!fileStream.is_open()) {
        std::cerr << "Error: could not open file " << file_input << std::endl;
    }
    if (!database.is_open())
    {
        std::cerr << "Error: could not open DB file " << std::endl;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    this->data = other.data;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    if (this != &rhs)
        this->data = rhs.data;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    fileStream.close();
    database.close();
}

void BitcoinExchange::fill_Map_DB()
{
    std::string line;
    std::string header = "date,exchange_rate";

    while (std::getline(database, line)) {
        if (line == header) 
            continue;
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos)
        {
            std::string befor = line.substr(0, commaPos);
            std::string after = line.substr(commaPos + 1);
            float number = atof(after.c_str());
            this->data[befor] = number;
        }
    }
}

int isValidDate(std::string line)
{

    if (line.length() != 10 || line[4] != '-' || line[7] != '-')
		return 1;
    if (std::atoi(line.substr(0,4).c_str()) < 2009 || std::atoi(line.substr(0, 4).c_str()) > 2022)
        return 2;
    if (std::atoi(line.substr(5,2).c_str()) < 1 || std::atoi(line.substr(5, 2).c_str()) > 12)
        return 3;
    if (std::atoi(line.substr(8, 2).c_str()) < 1 || std::atoi(line.substr(8, 2).c_str()) > 31)
		return 4;
    return 5;
}

int     isValidNum(float num)
{
    if (num < 0)
        return 2;
    if (num < 0 || num > 1000)
        return 3;
    return 1;
}

int BitcoinExchange::check_line(std::string line)
{
    std::string date;
    size_t l;
    std::string num_str;
    float number;
    size_t len_normal;
    int i;
    size_t len = line.find('|');
    len_normal = len + 1;
    size_t not_newline = line.find_first_not_of(" ");
    if (not_newline != std::string::npos)
    {
        if (len != std::string::npos)
        {
            if (len > 11)
            {
                len--;
                while (len)
                {
                    if (line[len] != ' ')
                        break;
                    len--;
                }
                date = line.substr(0, len + 1 );
            }
            else {
                date = line.substr(0, len - 1 );
            }
        }
        else 
            date = line.substr(0, len);
        bool inSpaces = false;
        std::string result;
        for (size_t i = len_normal; i < line.size(); i++)
        {
            if (isspace(line[i])) 
            {
                if (!inSpaces) {
                    inSpaces = true;
                    result += ' '; // Add a single space for the sequence of spaces
                }
            } 
            else {
                inSpaces = false;
                result += line[i];
            }
        }
        if (!result.empty() && result[result.size() - 1] == ' ') 
            result.resize(result.size() - 1);
        size_t start = result.find_first_not_of(" ");
        if (start != std::string::npos) {
            result = result.substr(start);
            l = 0;
        } else {
            l = -1;
            result.clear(); // If only spaces are left, clear the string
        }

        while (l < result.size())
        {
            if (isdigit(result[l]) || result[l] == '.' || result[l] == '-')
                l++;
            else
                break;
        }
        if (l == result.size())
        {
            num_str = result;
            number = std::atof(num_str.c_str());
        }    

        i = isValidDate(date);
        if (i == 5 && l == result.size())
        {
            if (isValidNum(number) == 2)
            {
                std::cout << "Error: not a positive number." << std::endl;
                return 0;
            }
            else if (isValidNum(number) == 3)
            {
                std::cout << "Error: too large a number." << std::endl;
                return 0;
            }
            else
                return 1;
        }
        else 
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
    }
    else
        return 0;
}

void    BitcoinExchange::print_all()
{
    std::string line;

    std::string header = "date | value";
    std::string inputDate;
    float DataNum;
    float number_input;
    fileStream.clear();
    fileStream.seekg(0, std::ios::beg);
    while (std::getline(fileStream, line))
    {
        if (line == header) 
            continue;
        if (check_line(line))
        {
            size_t pipePos = line.find(' ');
            if (pipePos != std::string::npos)
            {
                inputDate = line.substr(0, pipePos);

                std::string after = line.substr(pipePos + 2);

                number_input = atof(after.c_str());

                bool found = false;
                std::map<std::string, double>::iterator it;
                for (it = data.begin(); it != data.end(); ++it) 
                {
                    if (it->first == inputDate)
                    {
                        found = true;
                        DataNum = it->second;
                        break;
                    }
                }
                if (found)
                    std::cout << inputDate << "=> " << number_input << " = " << number_input * DataNum << std::endl;
                else
                {
                    it = data.lower_bound(inputDate);
                    if (it != data.begin()) 
                        --it; // Move the iterator one step back to get the lower bound
                    if (it != data.end())
                        std::cout << inputDate << "=> " << number_input << " = " << number_input * it->second << std::endl;
                }
            }
        }
    }
}

size_t  BitcoinExchange::size_for_input_file()
{
    std::string ll;
    size_t i = 0;
    while (std::getline(fileStream, ll))
    {
        i++;
    }
    return i;
}
