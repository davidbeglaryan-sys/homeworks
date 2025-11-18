#include <iostream>
#include <array>


std::array<int, 5> createArray(){
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    return arr;
}

int main(){
    
    auto myArr = createArray();
    
    for (int x : myArr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}