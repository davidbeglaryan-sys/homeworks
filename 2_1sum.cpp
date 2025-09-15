#include <iostream>

template<typename T>

T sum(T value){
    return value;
}


template <typename T, typename... Args>

T sum(T first, Args... args){
    return first+sum(args...);
}

int main()
{
    std::cout<< sum(1, 3, 4, 2) << "\n";
    std::cout<< sum(1.3, 3.3, 4.1, 2.9);

    return 0;
}