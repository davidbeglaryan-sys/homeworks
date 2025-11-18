#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>


bool is_number(const std::string& s) {
    if (s.empty()) return false;

    size_t start = (s[0] == '-') ? 1 : 0;
    
    return std::all_of(s.begin() + start, s.end(), ::isdigit);
}


int evaluateRPN_no_catch(const std::vector<std::string>& tokens) {
    std::stack<int> operands;

    for (const std::string& token : tokens) {
        
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            
            if (operands.size() < 2) {
                std::cerr << "eror: incorect rpn.\n";
            }

            int b = operands.top(); operands.pop(); 
            int a = operands.top(); operands.pop(); 
            
            int result;
            if (token == "+") {
                result = a + b;
            } else if (token == "-") {
                result = a - b;
            } else if (token == "*") {
                result = a * b;
            } else if (token == "/") {
                if (b == 0) {
                    std::cerr << "eror: division 0\n";
                    
                }
                result = a / b;
            }
            
            operands.push(result);

        } else {
            if (!is_number(token)) {
                std::cerr << token << " is not number or operator.\n";
               
            }
            
            operands.push(std::stoi(token));
        }
    }

    if (operands.size() != 1) {
        std::cerr << "eror: incorect rpn.\n"; 
    }

    return operands.top();
}

int main() {
    std::vector<std::string> rpn1 = {"2", "3", "+", "4", "*"};
    int result1 = evaluateRPN_no_catch(rpn1);
    std::cout  << result1  << std::endl; 
    
    std::vector<std::string> rpn2 = {"10", "5", "3", "-", "/"};
    int result2 = evaluateRPN_no_catch(rpn2);
    std::cout << result2 <<  std::endl; 

    return 0;
}