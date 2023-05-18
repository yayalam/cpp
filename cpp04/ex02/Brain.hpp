#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &temp);
    Brain &operator=(const Brain &temp);
    ~Brain();
};