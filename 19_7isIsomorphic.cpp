#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


bool isIsomorphic(std::string str1, std::string str2) {
    
    std::map<char, int> map1;
    std::map<char, int> map2;

    for(char x: str1){
        map1[x]++;
    }
    
    for(char y: str2){
        map2[y]++;
    }

    std::vector<int> vec1;
    std::vector<int> vec2;
    
    for(auto& x: map1){
        vec1.push_back(x.second);
    }
    
    for(auto& x: map2){
            vec2.push_back(x.second);
        }
        
    std::sort(vec1.begin(), vec1.end());
    std::sort(vec2.begin(), vec2.end());

    if(vec1.size() == vec2.size()){
        for(int i=0; i<vec1.size(); i++){
            if(vec1[i] != vec2[i]) return false;
        }
        return true;
    }
    
    return false;
    
}


int main(){
    
    std::cout << isIsomorphic("egg", "add") << '\n';     // 1 (true)
    std::cout << isIsomorphic("foo", "bar") << '\n';     // 0 (false)
    std::cout << isIsomorphic("paper", "title") << '\n';
    

}