
#include "LinkedQueue.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int get_digit_at_position(int number, size_t position) {
    return static_cast<int>(number / pow(10, position)) % 10;
}

const int MAX_EXPONENT = 9;

void radix(std::vector<int> &vector) {
    size_t vector_size = vector.size();

    LinkedQueue<int> queues[10];

    for (size_t i = 0; i <= MAX_EXPONENT; ++i) {
        for (size_t j = 0; j < vector_size; ++j) {
            queues[get_digit_at_position(vector[j], i)].push(vector[j]);
        }

        int vector_iterator = 0;

        for (auto & queue : queues){
            while (!queue.empty()) {
                vector[vector_iterator++] = queue.pop();
            }
        }

    }
}

int main() {
    int x;
    std::vector<int> v;
    while (std::cin >> x) v.push_back(x);
    radix(v);
    for (const auto &i: v)
        std::cout << i << std::endl;
    return 0;
}
