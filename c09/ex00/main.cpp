#include "BitcoinExchange.hpp"


int main(int arc, char **argv)
{
    if (arc == 2)
    {
        BitcoinExchange bit(argv[1]);
        // size_t i = 0;
        // size_t m = bit.size_for_input_file();
        // m = 2;
        bit.check_if_valid();
        // std::cout << bit.getSize() << std::endl;
        // bit.print();
        bit.print_all();
        // std::string dd = "2011-01-03";

        // std::cout << std::lower_bound(dd) << std::endl;
        // double p = 3 * 0.3;
        // std::cout << "p" << p << std::endl;
        // while (i < m)
        // {
        //     bit.current_line = i;
        //     bit.Start_Searching();
        //     i++;
        // }
    }
}