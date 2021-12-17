//
// Created by antonio on 17. 12. 2021..
//
#include "vector"
#include <cstdlib>
#include <iostream>
#include "timer.h"

using namespace std;

int main() {
    vector<timer> timers;
    timers.emplace_back(3, 4, 2.2);
    timers.emplace_back(4, 8, 8.4);
    timers.emplace_back(22, 59, 57.3);
    timer result = timer::average(timers);
    timer fastest = timer::fastest(timers);
    cout << "Average:" << endl << result << endl;
    cout << "Fastest:" << endl << fastest << endl;
    for (timer t: timers)
        cout << "Time difference in seconds from fastest:" << endl << (int) t.fastestDifference(timers) << endl;

    return 0;
}
