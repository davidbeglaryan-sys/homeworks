#include <iostream>

template<typename T>

void printValue(const T& value){
    std::cout<< value << std::endl;
}

template<>
void printValue<bool>(const bool& value){
    (value) ? std::cout<<"True" << std::endl : std::cout<<"False" << std::endl;
}

template <>
void printValue<char*>(char* const& value) {
    std::cout << "[" << value << "]" << std::endl;
}


int main() {
    int a = 42;
    double b = 3.14;
    bool c = true;
    bool d = false;
    char str[] = "barigun dzez!";

    printValue(a);     
    printValue(b);     
    printValue(c);     
    printValue(d);     
    printValue(str);   

    return 0;
}