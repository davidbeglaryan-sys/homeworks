#include <iostream>

template<class T>
class Range {
private:
    T start;
    T end;

public:
    Range(T s, T e) : start(s), end(e) {}

    bool contains(const T& value) const {
        return (value >= start && value <= end);
    }

    T length() const {
        return end - start;
    }

    void print() const {
        std::cout << "[" << start << ", " << end << "]" << std::endl;
    }
};

int main() {
    Range<int> r1(3, 10);
    r1.print();
    std::cout << "Length: " << r1.length() << std::endl;
    std::cout << "Contains 5? " << (r1.contains(5) ? "Yes" : "No") << std::endl;

    Range<double> r2(1.5, 4.3);
    r2.print();
    std::cout << "Length: " << r2.length() << std::endl;
    std::cout << "Contains 3.2? " << (r2.contains(3.2) ? "Yes" : "No") << std::endl;

    Range<char> r3('b', 'o');
    r3.print();
    std::cout << "Length: " << r3.length() << std::endl;
    std::cout << "Contains 'c'? " << (r3.contains('c') ? "Yes" : "No") << std::endl;
    std::cout << "Contains 'z'? " << (r3.contains('z') ? "Yes" : "No") << std::endl;

    return 0;
}
