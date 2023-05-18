#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "The default constructor of the Brain class\n";
}

Brain::Brain(const Brain &temp)
{
    std::cout << "the copy constructor for Brain Class\n";
    std::copy(temp.ideas,temp.ideas + 100,this->ideas);
}

Brain &Brain::operator=(const Brain &temp)
{
    std::cout << "the assignement operator for Brain class\n";
    if (this != &temp)
        std::copy(temp.ideas,temp.ideas + 100,this->ideas);
    return (*this);
}

Brain::~Brain()
{
    std::cout << "The default deconstructor for Brain class\n";
}