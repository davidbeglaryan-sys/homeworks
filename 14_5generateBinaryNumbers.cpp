#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

std::vector<std::string> generateBinaryNumbers(int N) {
    if (N <= 0) {
        return {}; 
    }

    std::queue<std::string> q;
    std::vector<std::string> result;

    q.push("1"); 
    
    while (result.size() < static_cast<size_t>(N)) {
        std::string current = q.front();
        q.pop();

        result.push_back(current);
        if (result.size() == static_cast<size_t>(N)) {
            break; 
        }

        std::string next_zero = current + "0";
        q.push(next_zero);

        std::string next_one = current + "1";
        q.push(next_one);
    }

    return result;
}

int main() {
    int N = 10;
    std::vector<std::string> binary_numbers = generateBinaryNumbers(N);
 
    for (size_t i = 0; i < binary_numbers.size(); ++i) {
        std::cout << "number " << i + 1 << ": " << binary_numbers[i] << std::endl;
    }
    
    
    return 0;
}