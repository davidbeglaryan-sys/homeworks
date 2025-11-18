#include <iostream>
#include<vector>
#include<set>

std::vector<int> findMissingNumbers(std::vector<int> vec, int N){
    
    std::set<int> myset(vec.begin(), vec.end());
    
    std::vector<int> missing_elems;
    
    for(int i=1; i<=N; i++){
        
        if(!myset.count(i)){
            missing_elems.push_back(i);
            
        }
    }
    
    return missing_elems;
}


int main(){
    std::vector<int> nums = {1, 3, 5, 6};
    findMissingNumbers(nums, 6);
    
    std::vector<int> missing = findMissingNumbers(nums, 6);

    for (int x : missing) {
        std::cout << x << " ";
    }
}