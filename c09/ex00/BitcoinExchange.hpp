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
    // std::map<std::string, double> data;
    // std::vector<std::pair<::string, double> data>>;
    std::vector<std::pair<std::string, float> > data;
    std::ifstream fileStream;
    std::ifstream database;
public:
    size_t                           current_line;
    BitcoinExchange(std::string file_input);
    void    Start_Searching();
    double    multiplied_by_rate(std::string data, double num);
    int     check_if_valid();
    size_t  getSize();
    void    print();
    void    print_all();
    size_t  size_for_input_file();
    // double  not_found(std::string date);
    // void    Search_In_Input_File(int i);
    // void    Check_If_In_DB(std::string data);
    ~BitcoinExchange();


};

#endif