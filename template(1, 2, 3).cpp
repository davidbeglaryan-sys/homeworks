#include <iostream>
#include <string>

template <typename T>

void printElement(const T& elem){
    std::cout << elem << std::endl;
}

template <typename T>
void mySwap(T first_elem, T second_elem){
    T thisrd_elem;
    thisrd_elem = first_elem;
    first_elem = second_elem;
    second_elem = thisrd_elem;
    std::cout << first_elem << " " << second_elem << std::endl;
}

template <typename T>

void sumArray(const T* arr, int size){
    T sum_arr{};
    for(int i=0; i<size; i++){
        sum_arr += arr[i];
    }
    std::cout << sum_arr << std::endl;
    
}

bool isEven(const int num){
    return (num%2==0);
}


int main()
{
    

    return 0;
}