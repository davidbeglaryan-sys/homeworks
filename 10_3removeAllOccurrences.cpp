#include <iostream>
#include <forward_list>

int removeAllOccurrences(std::forward_list<int>& fl, int value) {
    int count = 0;

    auto prev = fl.before_begin();  
    auto curr = fl.begin();         

    while (curr != fl.end()) {
        if (*curr == value) {
            curr = fl.erase_after(prev);  
            count++;
        } else {
            prev = curr;  
            curr++;
        }
    }

    return count;
}

int main() {
    std::forward_list<int> fl = {45, -9, 51, 65, 85, -74, 2};

    int removed = removeAllOccurrences(fl, 2);

    std::cout << "Count deleted elements: " << removed << "\n";
    std::cout << "list after deleting ";
    for (int x : fl)
        std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
