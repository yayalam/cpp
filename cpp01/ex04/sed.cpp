#include "sed.hpp"
#include <fstream>


void function_motor(std::string source, std::string s1, std::string s2){
    std::fstream file(source.c_str(), std::ios::in);
    std::ofstream filetoreplace(source + ".replace");

  if (!file.is_open()) {
    std::cout << "Failed to open file." << std::endl;
    exit(1);
  }

   if (!filetoreplace.is_open()) {
    std::cout << "Failed to open file. ff" << std::endl;
    exit(1);
  }

  std::string holder;
  std::string newtext;
  int iterator = 0;

  for(; getline(file, holder);){
    iterator = holder.find(s1);
    if (iterator >= 0){
        holder.erase(iterator, s1.length());
        holder.insert(iterator, s2);
    }
    newtext += holder + '\n';
  }
    newtext.pop_back();
    filetoreplace << newtext ;

}