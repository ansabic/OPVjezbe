//
// Created by antonio on 21. 01. 2022..
//

#ifndef OPVJEZBE_STACK_H
#define OPVJEZBE_STACK_H

template<class T>
class Stack {
    T *array = nullptr;
    int size = 0;
public:
    Stack(int capacity);

    void push(T element);

    T pop();

    bool isEmpty() const;
};


#endif //OPVJEZBE_STACK_H
