#include <iostream>
#include <algorithm>
#include <string>

std::string makeSentence(std::string s){
    return s+".";
}

template<typename ...Args>

std::string makeSentence(std::string first, Args... args){
    return first + " " + makeSentence(args...);
}


int main()
{
    std::cout<< makeSentence("barev", "dzez") << std::endl;

    return 0;
}