#include <iostream>
#include<vector>
#include<set>

void removeDuplicates(std::vector<int> vec){
    
    std::set<int> myset;
    
    for(int x: vec){
        myset.insert(x);
    }
    
    for(int y: myset){
        std::cout << y << " ";
    }
    
}


int main(){
    std::vector<int> nums = {4, 2, 5, 2, 3, 4, 1};
    removeDuplicates(nums);
}