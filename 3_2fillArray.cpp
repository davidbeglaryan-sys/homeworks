#include <iostream>
#include <array>


void fillArray(std::array<int, 7>& arr, int value){
    for (auto& elem : arr) {
        elem = value;
    }
}

int main(){
    
    std::array<int, 7> myArr; 

    fillArray(myArr, 7);
    
    for (int x : myArr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}