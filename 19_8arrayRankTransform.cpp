#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


std::vector<int> arrayRankTransform(std::vector<int>& nums){
    
    std::map<int, int> mymap;
    for(int x: nums){
        mymap[x] = 1;
    }
    
    std::vector<int> sorted_nums;
    for(auto& x: mymap){
        sorted_nums.push_back(x.first);
    }
    
    std::map<int, int> ranks;
    for(int i=0; i<sorted_nums.size(); i++){
        ranks[sorted_nums[i]] = i+1;
    }
    
    std::vector<int> result;
    for(auto& x: nums){
        result.push_back(ranks[x]);
    }
    
    return result;
    
}

int main(){
    std::vector<int> arr = {40, 10, 20, 30};
    std::vector<int> result = arrayRankTransform(arr);
    for(int x: result){
        std::cout << x << " ";
    }
    // result: {4, 1, 2, 3}
    std::cout << "\n";
    
    std::vector<int> arr2 = {100, 100, 100};
    std::vector<int> result2 = arrayRankTransform(arr2);
    for(int x: result2){
        std::cout << x << " ";
    }
    // result2: {1, 1, 1}
}