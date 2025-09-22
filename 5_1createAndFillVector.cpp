#include <iostream>
#include <vector>

void createAndFillVector(int n){
    
    std::vector<int> vec(n);
    
    for(int i=0; i<n; i++){
        vec[i] = i+1;
        std::cout<< vec[i] << " ";
    }
    std::cout<< "\n";
    
    std::cout << "size() = " << vec.size() << "\n";
    std::cout << "capacity() = " << vec.capacity() << "\n";
    
}


int main() {
    int N;
    std::cout << "Введите размер вектора: ";
    std::cin >> N;

    createAndFillVector(N);

    return 0;
}