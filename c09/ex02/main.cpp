#include "PmergeMe.hpp"

int    check_Is_Digit(char **argv)
{
    int i;

    i = 1;
    while (argv[i])
    {
        int j = 0;
        while (argv[i][j])
        {
            while (argv[i][j] == ' ')
                j++;
            if (isdigit(argv[i][j]))
            {
                j++;
            }
            else if (argv[i][j] == '-')
            {
                std::cout << "the input must be only positive number" << std::endl;
                return 0;
            }
            else
            {
                std::cout << "the input must be only number" << std::endl;
                return 0;
            }
        }
        i++;
    }
    return 1;
}

int main(int arc, char **argv)
{
    if(check_Is_Digit(argv))
    {
        std::vector<std::vector<int> > allNumbers;

        for (int i = 1; i < arc; ++i) {
            std::vector<int> numbers;
            std::istringstream iss(argv[i]);
            int num;
            while (iss >> num) {
                numbers.push_back(num);
            }
            if (!numbers.empty()) {
                allNumbers.push_back(numbers);
            }
        }
        PmergeMe merg = PmergeMe(allNumbers);
    }

}