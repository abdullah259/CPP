#ifndef SPAN
#define SPAN

#include <iostream>
# include <vector>
#include <algorithm>
#include <limits>

class Span
{
private:
    std::vector<int> intArray;
    unsigned int N;

public:
    Span(unsigned int n);
    Span(const Span &old);
    Span	&operator=(const Span &rhs);
    Span(void);
    ~Span();

    void addNumber(int);
    void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
    int shortestSpan() const;
    int longestSpan() const;
    std::vector<int> &getVec();
	unsigned int	&getSize();
    class NoEnoughSpaceInVector: public std::exception
    {
        const char* what() const throw();
    };

    class NoSpanFoundException: public std::exception
    {
        const char* what() const throw();
    };
};


#endif