#include <iostream>
#include <vector>
#include <map>
#include <string>

int firstUniqueChar(std::string tested_char) {
    std::map<char, int> result;
    
    for(char x : tested_char){
        result[x]++;
    }
    
    for(int i=0; i<tested_char.size(); i++){
        if(result[tested_char[i]] == 1){
            return i;
        }
    }
    
    return -1;
}

int main() {
    std::string s = "leetcode";
    std::cout << firstUniqueChar(s) << '\n';  // 0 ('l')

    std::string s2 = "loveleetcode";
    std::cout << firstUniqueChar(s2) << '\n';  // 2 ('v')
    
}