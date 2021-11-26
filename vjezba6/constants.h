//
// Created by antonio on 25. 11. 2021..
//
#include "vector"

using namespace std;

#ifndef OPVJEZBE_CONSTANTS_H
#define OPVJEZBE_CONSTANTS_H
const char *const FILE_LOCATION = "/home/antonio/Desktop/movie.txt";
const int LIVES = 8;
const vector<string> hangmanStates =
        {
                "_______\n"
                "| /\n"
                "|\n"
                "|\n"
                "|\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|\n"
                "|\n"
                "|\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "|\n"
                "|\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "|   \\\n"
                "|\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "|  |\\\n"
                "|\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "| /|\\\n"
                "|\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "| /|\\\n"
                "|  |\n"
                "|\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "| /|\\\n"
                "|  |\n"
                "|   \\\n"
                "|\n"
                "___|____",
                "_______\n"
                "| /|\n"
                "|/ O\n"
                "| /|\\\n"
                "|  |\n"
                "| / \\\n"
                "|\n"
                "___|____"};
#endif //OPVJEZBE_CONSTANTS_H
