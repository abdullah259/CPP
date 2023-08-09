#include "RPN.hpp"


Rpn::Rpn(std::string notion)
{

    this->argv = notion;
    
}

Rpn::Rpn(const Rpn &other)
{
    this->argv = other.argv;
    this->stack = other.stack;
}

Rpn &Rpn::operator=(const Rpn &rhs)  
{
	if (this != &rhs)
	{
		argv = rhs.argv;
		stack = rhs.stack;
	}
	return (*this);
}

Rpn::Rpn(){
}

Rpn::~Rpn(){

}

const char* Rpn::ErrorHappen::what() const throw(){return "Error";}
const char* Rpn::DivisionByZero::what() const throw(){return "Error: Division by zero";}

void Rpn::calua()
{
    if(isdigit(argv[0]))
        if (argv[1] == '-' || argv[1] == '+'|| argv[1] == '*' || argv[1] == '/')
            throw ErrorHappen();
    std::istringstream iss(this->argv);
    std::string token;
    double left;
    double right;
    double total;

    left = 0;
    right = 0;
    total = 0;
    while (iss >> token)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (stack.size() < 2)
                throw ErrorHappen();
            if (token == "+")
            {
                right  = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                total = left + right;
                stack.push(total);
            }
            else if (token == "-")
            {
                right  = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                total = left - right;
                stack.push(total);
            }
            else if (token == "*")
            {
                right  = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                total = left * right;
                stack.push(total);
            }
            else if (token == "/")
            {

                right  = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                if (right == 0)
                    throw DivisionByZero();
                total = left / right;
                stack.push(total);
            }   
        }
        else if (isdigit(token[0])) 
        {
            double number;

            number = atoi(token.c_str());
            if (number > 10)
                throw ErrorHappen();
            stack.push(number);
        }
        else 
            throw ErrorHappen();
    }
    if (stack.size() != 1)
    {
        std::cout << "Missing operators, numbers are still in stack" << std::endl;
    }
    std::cout << stack.top() << std::endl;
}