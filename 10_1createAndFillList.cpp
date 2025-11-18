#include <iostream>
#include <forward_list>

void createAndFillList(int n){
    std::forward_list<int> flist;
    
    for(int i=0; i<n; i++){
        flist.push_front(i);
    }
    
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
}

int main() {
    int N;
    std::cin >> N;

    createAndFillList(N);

    return 0;
}