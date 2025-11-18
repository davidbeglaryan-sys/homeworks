#include <iostream>
#include <vector>

std::vector<int> createVectorFromInput(){
    std::vector<int> vec;
    int num;
    
    std::cout << "write number other than 0";
    
    while(666){
        std::cin >> num;
        if(num == 0) break;
        vec.push_back(num);
    }
    
    return vec;
    
}


int main() {
    std::vector<int> myVec = createVectorFromInput();

    std::cout << "size: " << myVec.size() << "\n";
    std::cout << "elements: ";
    for (int x : myVec) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}