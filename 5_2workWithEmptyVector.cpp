#include <iostream>
#include <vector>

void workWithEmptyVector(){
    std::vector<int> vec;
    
    for(int i=1; i<11; i++) {
        vec.push_back(i);
        
        std::cout << i << " " << vec.size() << " " << vec.capacity() << "\n";
    }
    
    for(int x: vec){
        std::cout << x << " ";
    }
    
}


int main() {

    workWithEmptyVector();
    return 0;
}