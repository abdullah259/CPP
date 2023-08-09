#ifndef RPN
# define RPN
#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>
#include <sstream>
#include <stdexcept>

class Rpn
{
    private:
        std::stack<double> stack;
        std::string argv;
    public:
        Rpn(void);
        Rpn(std::string notion);
        Rpn(const Rpn &other);
        Rpn &operator=(const Rpn &rhs);
        void calua();
        class ErrorHappen : public std::exception
        {
            const   char *what() const throw(); 
        };
        class DivisionByZero : public std::exception
        {
            const   char *what() const throw(); 
        };
        ~Rpn();
};

#endif