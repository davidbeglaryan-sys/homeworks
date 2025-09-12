#include <iostream>
#include <string>


template<class T1, class T2>

class Pair{
    
private:
    T1 fist_elem;
    T2 second_elem;
    
public:
    
    Pair(T1 fist, T2 second): fist_elem(fist), second_elem(second) {}
    
    void print() {
        std::cout << fist_elem << "\n" << second_elem << std::endl; 
    }
    
    
};



int main()
{
    Pair<int, double> p1(77, 3.14);
    p1.print();

    Pair<std::string, int> p2("age", 20);
    p2.print();


}