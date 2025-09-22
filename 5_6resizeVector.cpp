#include <iostream>
#include <vector>

template <typename T>
void resizeVector(std::vector<T>& vec, std::size_t newSize,  T& defaultValue) {
    
    
    std::cout << "До resize: ";
    
    for (T& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << "\nsize = " << vec.size() 
              << ", capacity = " << vec.capacity() << "\n";

    vec.resize(newSize, defaultValue);

    std::cout << "После resize: ";
    
    for (T& elem : vec) {
        std::cout << elem << " ";
    }
    
    
    std::cout << "\nsize = " << vec.size() 
              << ", capacity = " << vec.capacity() << "\n";
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    resizeVector(numbers, 8, 0);  
    std::cout << "\n";
    resizeVector(numbers, 3, 0);   

    return 0;
}
