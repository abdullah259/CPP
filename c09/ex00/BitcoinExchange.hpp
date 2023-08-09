#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <string>
#include <limits>
#include <string.h>

class BitcoinExchange
{
private:
    std::map<std::string, double> data;
    std::ifstream fileStream;
    std::ifstream database;
public:
    size_t                           current_line;
    BitcoinExchange(std::string file_input);
    BitcoinExchange &operator=(const BitcoinExchange &rhs);
    BitcoinExchange(const BitcoinExchange &other);
    ~BitcoinExchange();
    void     fill_Map_DB();
    int check_line(std::string line);
    void    print_all();
    size_t  size_for_input_file();
};

#endif