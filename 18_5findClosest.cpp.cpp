#include<iostream>
#include<vector>
#include<set>

int findClosest(std::set<int> my_set, int target){
    
    if(my_set.empty()) return -1;
    
    auto it_up = my_set.lower_bound(target);
    
    if(it_up==my_set.begin()){ 
        return *it_up;
        }
    else if(it_up == my_set.end()){
        auto it = std::prev(it_up);
        return *it;
        }
    else{
        
        auto it_down = std::prev(it_up); 

        if (std::abs(*it_up - target) < std::abs(target - *it_down))
            return *it_up;
        else
            return *it_down; 
         
    }
    
}
    

int main(){
    std::set<int> s = {1, 5, 10, 15, 20};
    std::cout << findClosest(s, 12) << '\n';  
    std::cout << findClosest(s, 13) << '\n';
}