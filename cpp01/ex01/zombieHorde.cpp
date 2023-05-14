#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *book = new Zombie[N];
    for(int i = 0; i < N ; i++){
        book[i].setName(name);
    }
    for(int i = 0; i < N; i++){
        book[i].announce();
    }
    return book;
}