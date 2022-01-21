//
// Created by antonio on 21. 01. 2022..
//

#include <iostream>
#include <cstring>
#include "Stack.h"

bool compareInts(int a, int b) {
    if (a > b)
        return true;
    return false;
}

bool compareFloats(float a, float b) {
    if (a > b)
        return true;
    return false;
}

bool compareChar(char a, char b) {
    char lowerA = (char) tolower(a);
    char lowerB = (char) tolower(b);
    if (lowerA - lowerB >= 0)
        return false;
    else
        return true;
}

template<class T>
void sort(T *array, int size, bool (*comparator)(T, T));

template<>
void sort<int>(int *array, int size, bool (*comparator)(int, int)) {
    for (int j = 0; j < size - 1; j++) {
        for (int i = j; i < size - 1; i++) {
            int current = array[i];
            int next = array[i + 1];
            if (comparator(current, next)) {
                int temp = next;
                array[i] = array[i + 1];
                array[i + 1] = temp;
                break;
            }

        }
    }
}

template<>
void sort<char>(char *array, int size, bool (*comparator)(char, char)) {
    for (int j = 0; j < size - 1; j++) {
        for (int i = j; i < size - 1; i++) {
            if (comparator(array[i], array[i + 1])) {
                char temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                break;
            }
        }
    }
}

int main() {
    std::string firstString = "sortiraj";
    std::string secondString = "SortiRaJ";

    char *testString = strdup(firstString.data());
    std::cout << testString << std::endl;
    sort<char>(testString, (int) firstString.size(), compareChar);
    std::cout << testString << std::endl;
    Stack<int> stack = Stack<int>(10);
    stack.push(3);
    stack.push(4);
    while (!stack.isEmpty())
        std::cout << stack.pop() << std::endl;
    return 0;
}