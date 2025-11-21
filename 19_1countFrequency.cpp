#include <iostream>
#include <vector>
#include <map>

std::map<int, int> countFrequency( std::vector<int>& vec){
    
    std::map<int, int> mymap;
    
    for(int x: vec){
        mymap[x]++;
    }
    
    return mymap;
}


int main(){
    std::vector<int> nums = {4, 2, 3, 4, 2, 3, 4, 3, 1, 4};
    std::map<int, int> result = countFrequency(nums);

    std::cout << "{";

    bool first = true;
    for (auto& p : result) {
        if (!first) std::cout << ", ";
        std::cout << p.first << ": " << p.second;
        first = false;
    }

    std::cout << "}";

    // result: {1: 1, 2: 2, 3: 3, 4: 4}
}