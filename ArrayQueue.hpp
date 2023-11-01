//
// Created by Kacper Kuchta on 01/11/2023.
//

#ifndef ZESTAW02_ARRAYQUEUE2_H
#define ZESTAW02_ARRAYQUEUE2_H

#include <stdexcept>

template<class T>
class ArrayQueue {
private:
    unsigned int read = 0; //index to read (first non empty if exists)
    unsigned int write = 0; //index to write (empty)
    T *array;
    int max_size;

    int mask(int index) {
        return index % (max_size - 1);
    }

public:
    ArrayQueue(int max_size) {
        this->array = new T[max_size];
        this->max_size = max_size;
    }

    ~ArrayQueue() {
        delete[] array;
    }

    template<class U>
    void push(U &&x) {
        if (size() == max_size) {
            throw std::out_of_range("ArrayQueue is full");
        }
        array[std::forward<U>(mask(write))] = x;
        ++write;
    }

    T pop() {
        if (empty()) {
            throw std::underflow_error("ArrayQueue is empty");
        }
        T element = array[mask(read)];
        ++read;
        return element;
    }

    int size() {
        return write - read;
    }

    bool empty() {
        return size() == 0;
    }
};

#endif //ZESTAW02_ARRAYQUEUE2_H
