#include <iostream>
#include <array>

template<typename T, std::size_t n>

bool compareArrays(std::array<T, n>& arr1, std::array<T, n>& arr2){
    for(int i=0; i<n; i++){
        if(arr1[i]!= arr2[i]){
            return false;
        }
    }
    return true;
}


int main() {
    std::array<int, 5> a1 = {1, 2, 3, 4, 5};
    std::array<int, 5> a2 = {1, 2, 3, 4, 5};
    std::array<int, 5> a3 = {1, 2, 3, 4, 6};
    
    std::cout << std::boolalpha; 
    std::cout << compareArrays(a1, a2) << std::endl;
    std::cout << compareArrays(a1, a3) << std::endl;

    return 0;
}