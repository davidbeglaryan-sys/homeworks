#include <iostream>
#include <deque>

void createAndFillDeque(int n){
    
    std::deque<int> deq;
    
    for(int i=1; i<n; i++){
        if(i%2 != 0){
            deq.push_back(i);
        }
    }
    
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            deq.push_front(i);
        }
    }
    
    for (int element : deq) {
        std::cout << element << " ";
    }
    std::cout << "\n";
    
}

int main()
{
    createAndFillDeque(10); 

    return 0;
}