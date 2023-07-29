#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span &old): N(old.N)
{
	this->intArray = old.intArray;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
    {
        this->intArray = rhs.intArray;
        this->N = rhs.N;
    }
    return *this;
}

Span::~Span(){}


void    Span::addNumber(int el)
{
    if (intArray.size() >= N)
        throw NoEnoughSpaceInVector();
    intArray.push_back(el);
}

void	Span::addNumber(std::vector<int>::iterator bg, std::vector<int>::iterator en)
{
	if(static_cast<size_t> (en - bg) > (this->N - this->intArray.size()))
		throw NoEnoughSpaceInVector();
	for(std::vector<int>::iterator start = bg; start != en; start++)
		intArray.push_back(*start);
}

int Span::shortestSpan() const
{
	if(intArray.size() == 0 || intArray.size() == 1 )
		throw NoSpanFoundException();

    std::vector<int> sortedNumbers = intArray;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minDistance = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int distance = std::abs(sortedNumbers[i] - sortedNumbers[i - 1]);
        minDistance = std::min(minDistance, distance);
    }

    return minDistance;
}

int Span::longestSpan() const
{
    if(intArray.size() == 0 || intArray.size() == 1 )
        throw NoSpanFoundException();

    int maxDistance = std::numeric_limits<int>::min(); // Initializing maxDistance to the minimum possible value

    for (size_t i = 0; i < intArray.size(); ++i) {
        for (size_t j = i + 1; j < intArray.size(); ++j) {
            int distance = std::abs(intArray[i] - intArray[j]);
            maxDistance = std::max(maxDistance, distance);
        }
    }
    return maxDistance;
}

std::vector<int> &Span::getVec(){return this->intArray;}
unsigned int	&Span::getSize(){return this->N;}

const char* Span::NoEnoughSpaceInVector::what() const throw(){return "No Enough Space !";}
const char* Span::NoSpanFoundException::what() const throw(){return "No Span Possible !";}