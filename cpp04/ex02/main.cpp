#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal tmp;//this is an error 
    Animal *Arr[100];
    int i = 0;
    for(;i<1;i++)
    {
        std::cout <<"-------------\n";
        Arr[i] = new Dog();
        std::cout <<"-------------\n";
    }
    for(;i<2;i++)
    {
        std::cout <<"-------------\n";
        Arr[i] = new Cat();
        std::cout <<"-------------\n";
    }
    i = 0;
    for(;i<2;i++)
    {
        std::cout <<"-------------\n";
        std::cout <<"my type " << Arr[i]->getType() << std::endl;
        Arr[i]->~Animal();
        std::cout <<"-------------\n";
    }

    return 0;
}