#include <iostream>
#include <string>
#include <stack>

void reverseString(std::string& str) {
    std::stack<char> char_stack;

    for (char c : str) {
        char_stack.push(c);
    }


    int i = 0;
    while (!char_stack.empty()) {
        char c = char_stack.top();
        
        str[i] = c;
        
        char_stack.pop();
        
        i++;
    }
}


int main() {
    std::string s = "Hello world";
    reverseString(s);
    std::cout << s << '\n';
    
    return 0;
}