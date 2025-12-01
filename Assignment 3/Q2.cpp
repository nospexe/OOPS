#include <iostream>
#include <vector>
#include <queue>

int rope(const std::vector<int>& ropes) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int rope : ropes) {
        minHeap.push(rope);
    }

    int totalCost = 0;

    while (minHeap.size() > 1) {
        int first = minHeap.top(); minHeap.pop();
        int second = minHeap.top(); minHeap.pop();

        int currentCost = first + second;
        totalCost += currentCost;
        minHeap.push(currentCost);
    }

    return totalCost;
}