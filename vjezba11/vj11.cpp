//
// Created by antonio on 21. 01. 2022..
//

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int diffDescending(int &first, int &second) {
    if (first < second)
        return true;
    return false;
}

vector<int> getNumbers() {
    vector<int> result;
    ifstream file;
    try {
        file.open("/home/antonio/CLionProjects/OPVjezbe/vjezba11/numbers.txt");
    } catch (exception &exception) {
        throw exception;
    }
    string line;
    while (getline(file, line, '\n')) {
        istringstream stringStream(line);
        char *temp = new char[100];
        line.copy(temp, line.size());
        int number = stoi(temp);
        while (stringStream >> number)
            result.push_back((number));
    }
    return result;
}

int countLargerThan500(vector<int> &vec) {
    int counter = 0;
    for (int i: vec) {
        if (i > 500)
            counter++;
    }
    return counter;
}

int min(vector<int> &vec) {
    return *min_element(vec.begin(), vec.end());
}

int max(vector<int> &vec) {
    return *max_element(vec.begin(), vec.end());
}

void dropLesserThan300(vector<int> &vec) {
    vector<int> newVec;
    for (int i: vec) {
        if (i >= 300)
            newVec.push_back(i);
    }
    vec = newVec;
}

void sortDescending(vector<int> &vec) {
    sort(vec.begin(), vec.end(), diffDescending);
}

void print(vector<int> &vec) {
    for (int i: vec)
        cout << i << " ";
    cout << endl;
}

int main11() {
    vector<int> numbers = getNumbers();
    cout << "Larger than 500:" << endl << countLargerThan500(numbers) << endl;
    cout << "Min: " << min(numbers) << endl;
    cout << "Max: " << max(numbers) << endl;
    dropLesserThan300(numbers);
    print(numbers);
    sortDescending(numbers);
    print(numbers);
    return 0;
}