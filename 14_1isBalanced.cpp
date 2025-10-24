#include <iostream>
#include <string>
#include <stack>

bool isClosed(char open, char close){
    if(open == '(' && close == ')') return true;
    if(open == '{' && close == '}') return true;
    if(open == '[' && close == ']') return true;

    return false;
    
}

bool isBalanced(const std::string& brackets){
    
    std::stack<char> brakets_stack;
    
    for(char bracket : brackets){
        
        if(bracket == '(' || bracket == '[' || bracket == '{'){
            brakets_stack.push(bracket);
        } else 
        if(bracket == ')' || bracket == ']' || bracket == '}'){
            if(brakets_stack.empty()){
                return false;
            }
        
        if (isClosed(brakets_stack.top(), bracket)) {
                brakets_stack.pop(); 
            } else {
                return false; 
            }
        }
    }
    return brakets_stack.empty();
}


int main()
{
    std::cout<< isBalanced("({[]})");

    return 0;
}