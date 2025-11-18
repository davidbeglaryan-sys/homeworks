#include<set>
#include <iostream>
#include <vector>


int firstRepeating(std::vector<int> vec){
    
    std::set<int> set;
    
    for(int x : vec){
        if(set.count(x)){
            return x;
        }
        set.insert(x);
    }
    
    return -1;
    
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 2, 5, 6, 3};
    std::cout << firstRepeating(nums) << '\n';  // 2
}