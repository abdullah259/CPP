#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string file_input) : fileStream(file_input.c_str()), database("data.csv")
{
    if (!fileStream.is_open()) {
        std::cerr << "Error: could not open file " << file_input << std::endl;
        // Optionally, you can throw an exception here to handle the error further up the call stack.
    }
    if (!this->database.is_open())
    {
        std::cerr << "Error: could not open file " << file_input << std::endl;
    }
}

BitcoinExchange::~BitcoinExchange()
{
    fileStream.close();
}

size_t  BitcoinExchange::getSize()
{
    return (this->data.size());
}

void    BitcoinExchange::print()
{
    std::vector<std::pair<std::string, float> >::iterator it;
    for (it = data.begin(); it != data.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
}

int BitcoinExchange::check_if_valid()
{
    std::string line;
    std::string header = "date,exchange_rate";
    int i = 0;
    while (std::getline(database, line)) {
            if (line == header) {
            continue; // Skip the header line
        }
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos)
        {
            std::string befor = line.substr(0, commaPos);
            std::string after = line.substr(commaPos + 1);
            float number = atof(after.c_str());
            data.push_back(std::make_pair(befor,number));
            i++;
        }
    }
    return i;
}

int isValidDate(std::string line)
{
    if (line.length() != 10 || line[4] != '-' || line[7] != '-')
		return 1;
    if (std::atoi(line.substr(0,4).c_str()) < 2009 || std::atoi(line.substr(0, 4).c_str()) > 2021)
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

bool compareDates(const std::pair<std::string, double>& element, const std::string& date) {
    return element.first < date;
}

int check_line(std::string line)
{
    std::string date;
    std::string num_str;
    float number;
    int i;
    size_t len = line.find('|');
    date = line.substr(0, len - 1);
    num_str = line.substr(len + 1);

    number = atof(num_str.c_str());
    i = isValidDate(date);
    if (i == 5)
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
        // if (i == 1)
        //     std::cout << "should be like this Year-Month-Day" << std::endl;
        // else if (i == 2)
        //     std::cout << "the Year is not in our Date Range in DB" << std::endl;
        // else if (i == 3)
        //     std::cout << "the Month is not Correct" << std::endl;
        // else if (i == 4)
        //     std::cout << "the Days is not Correct" << std::endl;
        // else if (i == 5)
            std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
}

void    BitcoinExchange::print_all()
{
    std::string line;
    std::vector<std::pair<std::string, float> >::iterator it;
    std::string header = "date | value";
    std::string inputDate;
    float DataNum;
    float number_input;
    while (std::getline(fileStream, line))
    {
        if (line == header) {
            continue; // Skip the header line
        }

        if (check_line(line))
        {
            size_t pipePos = line.find(' ');
            if (pipePos != std::string::npos)
            {
                inputDate = line.substr(0, pipePos);

                std::string after = line.substr(pipePos + 2);

                number_input = atof(after.c_str());

                bool found = false;

                for (size_t i = 0; i < data.size(); i++) {
                    if (data[i].first == inputDate) {
                        found = true;
                        DataNum = data[i].second;
                        break;
                    }
                }
                if (found)
                    std::cout << inputDate << "=> " << number_input << " = " << number_input * DataNum << std::endl;
                else
                {
                    it = std::lower_bound(data.begin(), data.end(), inputDate,compareDates);
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
