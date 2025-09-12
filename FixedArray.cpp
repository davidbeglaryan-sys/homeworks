#include <iostream>
#include <string>

template<class T, int n>
class FixedArray {
private:
    T arr[n];

public:
    void arrSet(int index, T value) {
        if (index >= 0 && index < n) {
            arr[index] = value;
        }
    }

    T arrGet(int index) {
        if (index >= 0 && index < n) {
            return arr[index];
        }
        return T();
    }

    int Size() {
        return n;
    }
};

int main() {
    FixedArray<int, 5> arr1;

    for (int i = 0; i < arr1.Size(); i++) {
        int elem;
        std::cin >> elem;
        arr1.arrSet(i, elem);
    }

    for (int i = 0; i < arr1.Size(); i++) {
        std::cout << arr1.arrGet(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
