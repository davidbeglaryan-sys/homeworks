#include <iostream>
#include <vector>
#include <map>
#include <string>

std::map<char, std::vector<std::string>> groupByFirstChar( std::vector<std::string>& vec){
    
    std::map<char, std::vector<std::string>> groupmap;
    
    for(std::string x : vec){
        if(x.size() > 0){
            char firstchar = x[0];
            groupmap[firstchar].push_back(x);
        }
    }
    
    return groupmap;
    
}


int main(){
    std::vector<std::string> words = {"apple", "banana", "apricot", "cherry", "avocado"};
    auto result = groupByFirstChar(words);
    
    
    std::cout << "{";
    bool flag = true;
    for(auto& x: result){
        if(!flag) std::cout << ", ";
        std::cout << "'" << x.first << "'" << ": ";
        
        std::cout << "[";
        for(int i=0; i<x.second.size(); i++){
            if(i>0) std::cout << ", ";
            std::cout<< x.second[i];
        }
        std::cout << "]";
        flag = false;
    }
    std::cout << "}";
// result: {'a': ["apple", "apricot", "avocado"], 'b': ["banana"], 'c': ["cherry"]}
    
}