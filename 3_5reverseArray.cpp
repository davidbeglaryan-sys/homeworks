#include <iostream>
#include <array>

template<typename T, std::size_t n>

void reverseArray(std::array<T, n>& arr){
    for(int i=0; i<n/2; i++){
        T temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}


int main()
{
    std::array<int, 5> myArr= {1, 2, 3, 4, 5};
    reverseArray(myArr);
    
    for(int x: myArr){
        std::cout<< x << " ";
    }
    std::cout << std::endl;
    
    
    return 0;
}