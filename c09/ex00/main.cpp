#include "BitcoinExchange.hpp"


int main(int arc, char **argv)
{
    if (arc == 2)
    {
        try
        {
                    BitcoinExchange bit(argv[1]);
            size_t file =  bit.size_for_input_file();
            if (file)
            {
                bit.fill_Map_DB();
                bit.print_all();
            }
            else
            {
                std::cout << "The input file is empty" << std::endl;
                return 0;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}