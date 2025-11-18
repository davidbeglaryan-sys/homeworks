#include <iostream>

template <typename Func>

void applyAndPrint(Func) {}

template <typename Func, typename T, typename... Args>

void applyAndPrint(Func f, T first, Args... args){
    std::cout<< f(first) << std::endl;
    applyAndPrint(f, args...);
}

int fact(int num){
    int fact_num = 1;
    
    for(int i=1; i<=num ; i++){
        fact_num*=i;
    }
    return fact_num;
}

int square(int num){
    return num*num;
}



int main()
{
    applyAndPrint(square, 2, 3, 4, 5);
    
    applyAndPrint(fact, 2, 3, 4, 5);

    return 0;
}