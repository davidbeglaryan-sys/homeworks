#include<set>
#include <iostream>
#include <vector>


int removeRange(std::set<int>& myset, int low, int high){
    
    auto it_low = myset.lower_bound(low);
    auto it_high = myset.upper_bound(high);
    int count = 0;
    
    while(it_low != it_high){
        it_low = myset.erase(it_low);
        count++;
    }
    
    return count;
    
}

int main()
{
    std::set<int> s = {1, 3, 5, 7, 9, 11, 13, 15};
    int removed = removeRange(s, 5, 11);
    std::cout << removed << '\n';  // 4

}