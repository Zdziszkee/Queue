//
// Created by Kacper Kuchta on 29/10/2023.
//

#ifndef ZESTAW02_LINKEDQUEUE_HPP
#define ZESTAW02_LINKEDQUEUE_HPP

#include <stdexcept>

template<class T>
class LinkedQueue {
private:
    struct Node {
        T value;
        Node *next;

        explicit Node(T &&value) {
            this->value = value;
            next = nullptr;
        }
    };

    int number_of_elements = 0;
    Node *start = nullptr;
    Node *end = nullptr;
public:
    template<class U>
    void push(U &&x) {
        Node *newNode = new Node(std::forward<U>(x));
        ++number_of_elements;

        if (end == NULL) {
            start = end = newNode;
            return;
        }
        end->next = newNode;
        end = newNode;
    }

    T pop() {
        if (empty()) {
            throw std::underflow_error("LinkedStack is empty");
        }
        --number_of_elements;
        T value = start->value;
        start = start->next;
        if (start == NULL) {
            end = NULL;
        }
        return value;
    }

    int size() { return number_of_elements; }

    bool empty() { return (size() == 0); }
};

#endif //ZESTAW02_LINKEDQUEUE_HPP
