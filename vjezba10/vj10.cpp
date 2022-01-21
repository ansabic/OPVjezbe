//
// Created by antonio on 21. 01. 2022..
//

#include <iostream>
#include <cstring>
#include <algorithm>
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
    std::sort(array,  array + size, compareInts);
}

template<>
void sort<char>(char *array, int size, bool (*comparator)(char, char)) {
    std::sort(array,  array + size, compareChar);
}

int main() {
    std::string firstString = "sortiraj";
    std::string secondString = "SortiRaJ";

    char *testString = strdup(secondString.data());
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