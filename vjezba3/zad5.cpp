//
// Created by antonio on 12. 11. 2021..
//

#include "unos.h"
#include "print.h"
#include <string>

using namespace std;

int main35() {
    string myStr, subStr;
    cout << "Enter a string:" << endl;
    cin >> myStr;
    cout << "Enter a sub-string:" << endl;
    cin >> subStr;
    int counter = 0;
    unsigned long location = 0;
    while (location != string::npos) {
        location = myStr.find(subStr);
        if (location != string::npos) {
            myStr.erase(location, subStr.size());
            counter++;
        }
    }
    cout << counter;
}
