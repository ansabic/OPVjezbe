//
// Created by antonio on 21. 01. 2022..
//

#include "Stack.h"

template<>
void Stack<int>::push(int element) {
    array[size] = element;
    size++;
}

template<>
int Stack<int>::pop() {
    int result = array[size - 1];
    size--;
    return result;
}

template<>
bool Stack<int>::isEmpty() const {
    if (size > 0)
        return false;
    return true;
}

template<>
Stack<int>::Stack(int capacity) {
    array = new int[capacity];
}
