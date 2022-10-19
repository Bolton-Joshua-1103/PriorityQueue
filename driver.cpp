#include <iostream>
#include "ArrayPriorityQueue.h"

using namespace std;

int main() {
    ArrayPriorityQueue<int> APQ1;
    APQ1.enqueue(10);
    APQ1.enqueue(6);
    APQ1.enqueue(8);
    APQ1.enqueue(2);
    APQ1.enqueue(4);
    cout << "Queue Loaded" << endl;
    APQ1.enqueue(5);
    APQ1.dequeue();
    APQ1.print();
    cout << "TOP: " << APQ1.peekFront() << endl;
    cout << "Hello World!" << endl;
}