#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int rangeSumMap(std::map<int, int>& pair_map, size_t left, size_t right){
    
    auto left_it = pair_map.lower_bound(left);    
    auto right_it = pair_map.upper_bound(right);
    
    int sum = 0;
    
    for(auto it=left_it; it!=right_it; it++){
        sum += it->second;
    }
    
    return sum;
    
}

int main(){
    std::map<int, int> m = {{1, 10}, {3, 20}, {5, 30}, {7, 40}};
    std::cout << rangeSumMap(m, 3, 7) << '\n';  // 90 (20 + 30 + 40)
    std::cout << rangeSumMap(m, 2, 4) << '\n';  // 20 (только ключ 3)
    
}