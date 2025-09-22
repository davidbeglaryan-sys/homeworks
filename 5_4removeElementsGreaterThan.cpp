#include <iostream>
#include <vector>

int removeElementsGreaterThan(std::vector<int>& vec, int threshold) {
    int removedCount = 0;

    while (!vec.empty() && vec.back() > threshold) {
        vec.pop_back();   
        removedCount++;   
    }

    return removedCount;
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9, 12, 15};

    int threshold = 8;
    int removed = removeElementsGreaterThan(numbers, threshold);

    std::cout << "count removed elements: " << removed << "\n";

    std::cout << "other elements: ";
    for (int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}
