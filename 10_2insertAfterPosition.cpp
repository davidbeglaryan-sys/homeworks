#include <iostream>
#include <forward_list>

bool insertAfterPosition(std::forward_list<int>& ifl, int pos, int val) {
    auto it = ifl.begin();

    if (it == ifl.end()) {
        return false;
    }

    for (int i = 0; i < pos; i++) {
        ++it;
        if (it == ifl.end()) {
            return false;
        }
    }

    ifl.insert_after(it, val);
    return true;
}

int main() {
    std::forward_list<int> fl = {5, 8, -23, 84, 123};

    if (insertAfterPosition(fl, 1, 99))
      std::cout << "position puted sucsesfully" << "\n";
    else
        std::cout << "position not found";
    for (int x : fl)
        std::cout << x << " ";

    return 0;
}
