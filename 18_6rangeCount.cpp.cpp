#include<iostream>
#include<vector>
#include<set>


int rangeCount(std::set<int> myset, int low, int high){
    
    auto low_it = myset.lower_bound(low);
    auto high_it = myset.upper_bound(high);
    
    int count = 0;
    
    for(auto it = low_it; it!=high_it; it++){
        count++;
    }
    
    return count;
    
}

int main(){
    
    std::set<int> s = {1, 3, 5, 7, 9, 11, 13, 15};
    int start, end;
    std::cin >> start >> end;
    std::cout << "Distance betwen " << start << " and " << end << " is " <<  rangeCount(s, 4, 11) << '\n'; 
    
}