#include <iostream>
#include <array>

template <std::size_t n>
int countEven(const std::array<int, n> arr){
    int count=0;
    for (int  i = 0; i < arr.size(); i++) {
        if(arr[i]%2 ==0){
            count++;
        }
    }
    return count;
}

int main(){
    
    std::array<int, 7> myArr = {1, 2, 3, 4, 5, 6, 7};
    
    std::cout << countEven( myArr) << std::endl;

    return 0;
}
