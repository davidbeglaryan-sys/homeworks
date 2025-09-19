#include <iostream>
#include <array>
#include <algorithm> 

template <typename T, std::size_t N, std::size_t M>
std::array<T, M> copySubArray(const std::array<T, N>& arr, std::size_t start) {
    std::array<T, M> result{};
    std::copy_n(arr.begin() + start, M, result.begin());
    return result;
}

int main() {
    std::array<int, 5> arr = {27, 368, 99, 5034, 2};

    auto sub = copySubArray<int, 5, 3>(arr, 2); 

    for (int x : sub) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
