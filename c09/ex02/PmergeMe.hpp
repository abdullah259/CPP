#ifndef PMERGEME
#define PMERGEME

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
// #include <time.h>
#include <list>
#include <sys/time.h>
// #include <string>
#include <sstream>
// #include <cstdlib>
class PmergeMe
{
private:
    std::vector<int> vectorStack;
    std::list<int>  listStack;
    std::vector<std::vector<int> >  args;
public:
    PmergeMe(std::vector<std::vector<int> > argv);
    PmergeMe(PmergeMe const &copy);
    void    fill();
    PmergeMe &operator=(PmergeMe const &copy);
    void fordJohnsonSortVec(std::vector<int> &number, int left, int right);
    void fordJohnsonSortList(std::list<int> &number, int left, int right);
    void    merge(std::vector<int> &number, int left, int midd, int right);
    void    merge(std::list<int> &number, int left, int midd, int right);
    ~PmergeMe();
};


#endif