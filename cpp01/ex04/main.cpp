#include "sed.hpp"

int main(int argc, char **fi){
    if(argc < 4){
        std::cout << "enter a right arguments or you can leave :) " << std::endl;
        return 0;
    }
    std::string s1 = fi[2];
    std::string s2 = fi[3];
    std::string source = fi[1];
    function_motor(source, s1, s2);
}