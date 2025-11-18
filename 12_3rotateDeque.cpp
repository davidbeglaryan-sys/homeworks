#include <iostream>
#include <deque>


void rotateDeque(std::deque<int>& deq, int k) {

    int deq_size = deq.size();

    if (k>0) {
        int it = k;
        while (it!=0) {
            deq.push_front(deq[deq_size-1]);
            deq.pop_back();
            it--;
        }
    }

    if (k<0) {
        int it = k;
        while (it!=0) {
            deq.push_back(deq[0]);
            deq.pop_front();
            it++;
        }
    }

    for (int elem : deq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

}


int main() {
    std::deque<int> d = {1, 2, 3, 4, 5};
    rotateDeque(d, 2);

    rotateDeque(d, -1);
}
