#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<std::vector<int> > argv)
{
    this->args = argv;
    fill();
    std::cout << "before : ";
	for (size_t i =0; i < vectorStack.size(); i++)
		std::cout<< " " <<vectorStack[i];
	std::cout << std::endl;

    struct timeval startT,endT;
    gettimeofday(&startT,NULL);
    fordJohnsonSortVec(vectorStack,0,vectorStack.size() - 1);
    gettimeofday(&endT, NULL);
    std::cout << "After Vector: ";
	for (size_t i =0; i < vectorStack.size(); i++)
		std::cout<< " " <<vectorStack[i];
	std::cout << std::endl;
    std::cout <<"Time for Vector: us : "<< (endT.tv_sec * 1000000 + endT.tv_usec) - (startT.tv_sec * 1000000 + startT.tv_usec) << std::endl;

    std::cout << "-----------------------------------" << std::endl;


    struct timeval startL,endL;
    gettimeofday(&startL,NULL);
    fordJohnsonSortList(listStack,0,listStack.size() - 1);
    gettimeofday(&endL,NULL);
    std::cout << "After list: ";
    std::list<int>::iterator it = listStack.begin();
	for (; it != listStack.end(); it++)
		std::cout<< " " <<*it;
	std::cout << std::endl;
    std::cout <<"Time for list: us : "<< (endL.tv_sec * 1000000 + endL.tv_usec) - (startL.tv_sec * 1000000 + startL.tv_usec) << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
    this->vectorStack = copy.vectorStack;
    this->listStack = copy.listStack;
    this->args = copy.args;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy){
	if (this != &copy)
	{
		this->vectorStack = copy.vectorStack;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{}


void    PmergeMe::fill()
{
    for (size_t i = 0; i < this->args.size(); i++)
    {
        for (size_t j = 0; j < this->args[i].size(); j++)
        {
            if (args[i][j] < 0)
            {
                std::cout << "the numbers is negative" << std::endl;
                exit(0);
            }

            if (args[i][j] > INT_MAX || args[i][j] < INT_MIN)
            {
                std::cout << "Error: value not in range" << std::endl;
                exit(1);
            }

            if (std::find(vectorStack.begin(), vectorStack.end(), args[i][j]) != vectorStack.end()) {
                std::cout << "Duplicate number found: " << args[i][j] << std::endl;
                exit(0);
            }
            vectorStack.push_back(args[i][j]);
            listStack.push_back(args[i][j]);
        }
    }
    if (vectorStack.size() <= 1 || listStack.size() <= 1){
		std::cout << "Error insert more than one argument" << std::endl;
		return;
	}
}

void PmergeMe::merge(std::list<int>& arr, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    std::list<int> leftArr;
    std::list<int> rightArr;

    
    std::list<int>::iterator it = arr.begin();
    std::advance(it, left);
    for (int i = 0; i < leftSize; ++i) {
        leftArr.push_back(*it);
        std::advance(it, 1);
    }

    
    for (int j = 0; j < rightSize; ++j) {
        rightArr.push_back(*it);
        std::advance(it, 1);
    }

     std::list<int>::iterator leftIt = leftArr.begin();
     std::list<int>::iterator rightIt = rightArr.begin();
     std::list<int>::iterator arrIt = arr.begin();
    std::advance(arrIt, left);

    while (leftIt != leftArr.end() && rightIt != rightArr.end()) {
        if (*leftIt <= *rightIt) {
            *arrIt = *leftIt;
            ++leftIt;
        } else {
            *arrIt = *rightIt;
            ++rightIt;
        }
        ++arrIt;
    }

    while (leftIt != leftArr.end()) {
        *arrIt = *leftIt;
        ++leftIt;
        ++arrIt;
    }

    while (rightIt != rightArr.end()) {
        *arrIt = *rightIt;
        ++rightIt;
        ++arrIt;
    }
}

void PmergeMe::fordJohnsonSortList(std::list<int>& number, int left, int right) {
    if (left < right) {
        int midd = (left + right) / 2;
        fordJohnsonSortList(number, left, midd);
        fordJohnsonSortList(number, midd + 1, right);
        merge(number, left, midd, right);
    }
}



void PmergeMe::merge(std::vector<int>& arr, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    std::vector<int> leftArr(leftSize);
    std::vector<int> rightArr(rightSize);

    for (int i = 0; i < leftSize; ++i) {
        leftArr[i] = arr[left + i];
    }

    for (int j = 0; j < rightSize; ++j) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    while (i < leftSize) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < rightSize) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void    PmergeMe::fordJohnsonSortVec(std::vector<int> &number, int left, int right)
{
    if (left < right)
    {
        int midd = (left + right) / 2;
        fordJohnsonSortVec(number, left, midd);
        fordJohnsonSortVec(number, midd + 1, right);
        merge(number, left, midd, right);
    }
}