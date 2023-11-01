#include "LinkedQueue.hpp"
#include "ArrayQueue.hpp"
#include <iostream>

//
// Created by Kacper Kuchta on 29/10/2023.
//
int main() {
    ArrayQueue<int>* queue = new ArrayQueue<int>(10000);
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string operation;
        std::cin >> operation;
        if (operation == "A") {
            int x;
            std::cin >> x;
            queue->push(x);
        } else if (operation == "D") {
            if (!queue->empty()) {
                std::cout << queue->pop() << std::endl;
            } else {
                std::cout << "EMPTY" << std::endl;
            }
        } else if (operation == "S") {
            std::cout << queue->size() << std::endl;
        }
    }
    return 0;
}