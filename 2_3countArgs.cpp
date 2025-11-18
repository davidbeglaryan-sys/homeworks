#include <iostream>
#include <algorithm>
#include <string>


template<typename ...Args>

int countArgs(Args... args){
    return sizeof...(args);
}


int main()
{
    std::cout<< countArgs(1, 3, 4, 2) << std::endl;
    std::cout<< countArgs(1.3, 3.3, 4.1, 2.9) << std::endl;
    std::cout<< countArgs("a", "g") << std::endl;

    return 0;
}