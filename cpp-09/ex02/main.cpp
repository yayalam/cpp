#include "PmergeMe.hpp"


int main(int c, char **v)
{
	std::vector<size_t> vec;
    std::deque<size_t> deq;
    if (c == 1)
    {
        std::cout << "Usage: ./PmergeMe [expression]" << std::endl;
        return 0;
    }
    if (parseParams(vec,deq,v))
    {
        std::cout << "Error: Invalid input" << std::endl;
        return 0;
    }
    std::cout << "Before: ";
    printContainer(vec);

    double timeOfVector = sortFunction(vec);
    double timeOfDeque = sortFunction(deq);
    
    std::cout << "After: ";
    printContainer(vec);


    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : "<< timeOfVector << " ms\n";
    std::cout << "Time to process a range of " << vec.size() << " elements with std::deque  : "<< timeOfDeque << " ms\n";

    return 0;


}
