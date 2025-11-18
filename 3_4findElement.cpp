#include <iostream>
#include <array>

template <typename T, std::size_t n>
int findElement(const std::array<T, n>& arr, T thing) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == thing) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    std::array<int, 7> myArr = {1, 2, 3, 4, 5, 6, 7};
    
    std::cout << findElement(myArr, 5) << std::endl; 
    std::cout << findElement(myArr, 10) << std::endl;
    
    return 0;
}
