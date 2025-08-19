#include <queue>
#include "log.h"

// Priority queue test

// priority_queue is a container adaptor that provides constant time lookup of the largest element
int main() {

    // default priority queue test
    std::priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(5);
    pq.push(30);

    // Log the size of the priority queue
    mylog(MyLogLevel::I ,"Priority Queue Size: %d", pq.size());

    // Access and remove elements from the priority queue
    while (!pq.empty()) {
        mylog(MyLogLevel::I ,"Top Element: %d", pq.top());
        pq.pop();
    }

    mylog(MyLogLevel::I, "Priority Queue is empty now.");
    // min-heap priority queue test
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    // Insert elements into the min-heap priority queue
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(15);
    min_pq.push(5);
    min_pq.push(30);
    // Log the size of the min-heap priority queue
    mylog(MyLogLevel::I ,"Min-Heap Priority Queue Size: %d", min_pq.size());
    // Access and remove elements from the min-heap priority queue
    while (!min_pq.empty()) {
        mylog(MyLogLevel::I ,"Top Element: %d", min_pq.top());
        min_pq.pop();
    }

    return 0;
}