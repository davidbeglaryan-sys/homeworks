#include <array>
#include <iostream>

template <typename T, std::size_t N>
bool validateArray(const std::array<T, N>& arr, T min, T max) {
    for (const auto& elem : arr) {
        if (elem < min || elem > max) {
            return false; 
        }
    }
    return true; 
}

int main() {
    std::array<int, 5> numbers = {27, 28, 29, 12, 217};

    std::cout << std::boolalpha; 
    std::cout << validateArray(numbers, 10, 30) << "\n";
    std::cout << validateArray(numbers, 1, 250);
}
