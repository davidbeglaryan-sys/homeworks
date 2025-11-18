#include <iostream>
#include <deque>
#include <algorithm>

void removeFromBothEnds(std::deque<int>& deq, int k) {

    int max_removals = deq.size() / 2;
    int actual_iterations = std::min(k, max_removals);

    while (actual_iterations!=0) {
        deq.pop_front();
        deq.pop_back();

        for (int x : deq) {
            std::cout << x << " " ;
        }
        std::cout << "\n" ;
        actual_iterations--;

    }

    std::cout << std::endl;
}


int main() {
    std::deque<int> deq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    removeFromBothEnds(deq, 3);

}