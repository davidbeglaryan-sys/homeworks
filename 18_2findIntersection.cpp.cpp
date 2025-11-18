#include <iostream>
#include<vector>
#include<set>

std::set<int> removeDuplicates(std::vector<int> vec){
    
    std::set<int> myset(vec.begin(), vec.end());
    
    return myset;
}


void findIntersection(std::vector<int> vec1, std::vector<int> vec2){
    
    std::set<int> set1;
    std::set<int> set2;
    std::set<int> set3;
    
    set1 = removeDuplicates(vec1);
    set2 = removeDuplicates(vec2);
    
    for(int x: set1){
        if(set2.count(x)){
            set3.insert(x);
        }
    }
    
    std::vector<int> vec(set3.begin(), set3.end());
    
    for(int x: vec){
        std::cout << x << " ";
    }
}


int main(){
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {3, 4, 5, 6, 7};
    findIntersection(arr1, arr2);
}