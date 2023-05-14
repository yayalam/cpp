#include "Zombie.hpp"

int main(){
    Zombie ya;
    ya.setName("yahya");
    ya.announce();

    randomChump("safaa");
    Zombie *m = newZombie("camelia");
    m->announce();
}