#include <iostream>
#include <vector>

void manageCapacity(std::vector<int>& vec) {
    std::cout << "before reserve:\n";
    std::cout << vec.size() << "  " << vec.capacity() << "\n";

    vec.reserve(vec.size() + 500);

    std::cout << "after reserve:\n";
    std::cout << vec.size() << "  "<< vec.capacity() << "\n";

    for (int i = 1; i <= 500; i++) {
        vec.push_back(i);
    }

    std::cout << "after adding 500 elements:\n";
    std::cout << vec.size() << "  "<< vec.capacity() << "\n";
}

int main() {
    std::vector<int> numbers; 

    manageCapacity(numbers);

    return 0;
}
