#include <iostream>
#include <vector>
#include <map>
#include <string>

std::map<std::string, int> mergeMaps(const std::map<std::string,int>& map1, const std::map<std::string,int>& map2) {
    std::map<std::string,int> result = map1; 

    for (auto& p : map2) {
        result[p.first] += p.second; 
    }

    return result;
}

int main() {
    std::map<std::string,int> firstmap = {{"a",3}, {"b",4}, {"c",6}, {"d",1}};
    std::map<std::string,int> secondmap = {{"a",2}, {"b",6}, {"e",6}, {"l",1}};

    auto result = mergeMaps(firstmap, secondmap);

    std::cout << "{";
    bool first = true;
    for (auto& p : result) {
        if (!first) std::cout << ", ";
        std::cout << "'" << p.first << "': " << p.second;
        first = false;
    }
    std::cout << "}\n";
}