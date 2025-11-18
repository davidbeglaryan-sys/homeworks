#include <iostream>
#include<vector>
#include<set>

bool isSubset(std::vector<int> subvec, std::vector<int> supervec){
    
    std::set<int> subset(subvec.begin(), subvec.end());
    std::set<int> superset(supervec.begin(), supervec.end());

    if(subset.size() > superset.size()) return false;
    
    for(int x: subset){
        if(!superset.count(x)) return false;
    }
    
    return true;
    
}


int main(){
    std::vector<int> subset = {1, 3, 5};
    std::vector<int> superset = {1, 2, 3, 4, 5};
    std::cout << isSubset(subset, superset) << '\n';  // 1 (true)

    std::vector<int> subset2 = {1, 6};
    std::cout << isSubset(subset2, superset) << '\n';  // 0 (false)
}