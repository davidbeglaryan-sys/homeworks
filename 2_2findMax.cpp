#include <iostream>
#include <algorithm>
#include <string>


template<typename T, typename ...Args>
T findMax(T first, Args... args){
    return (std::max)({first, args...});
}


int main()
{
    std::cout<< findMax(1, 3, 4, 2) << std::endl;
    std::cout<< findMax(1.3, 3.3, 4.1, 2.9) << std::endl;
    std::cout<< findMax("a", "g") << std::endl;

    return 0;
}