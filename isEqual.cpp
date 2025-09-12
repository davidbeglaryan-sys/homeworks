#include <iostream>
#include <cstring> 

template <typename T>
bool isEqual(const T& a, const T& b) {
    return a == b;
}

template <>
bool isEqual<const char*>(const char* const& a, const char* const& b) {
    if (a == nullptr && b == nullptr) return true;
    if (a == nullptr || b == nullptr) return false;
    return std::strcmp(a, b) == 0;
}

int main() {
    std::cout << std::boolalpha;

    const char* pnull = nullptr;

    const char* c1 = "abc";
    const char* c2 = "abc";
    std::cout << "\"abc\" vs \"abc\": " << isEqual(c1, c2) << "\n" ;

    char arr1[] = "hello";
    char arr2[] = "hello";
    std::cout << "arr1 vs arr2: " << isEqual(arr1, arr2) ;

    return 0;
}
