#include <iostream>
#include <vector>
#include <set>

std::vector<int> symmetricDifference(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::set<int> set1(vec1.begin(), vec1.end());
    std::set<int> set2(vec2.begin(), vec2.end());

    std::set<int> set3;

    for (int x : set1) {
        if (!set2.count(x))
            set3.insert(x);
    }

    for (int x : set2) {
        if (!set1.count(x))
            set3.insert(x);
    }

    return std::vector<int>(set3.begin(), set3.end());
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4};
    std::vector<int> arr2 = {3, 4, 5, 6};

    std::vector<int> result = symmetricDifference(arr1, arr2);

    for (int x : result)
        std::cout << x << " ";
}
