//
// Created by antonio on 16. 12. 2021..
//

#ifndef OPVJEZBE_TIMER_H
#define OPVJEZBE_TIMER_H

#include "iostream"
#include "vector"


class timer {
    int h;
    int m;
    double s;

    void setH(int mH);

    void setM(int mM);

    void setS(double mS);

    static bool compare(timer &t1, timer &t2);

    void operator+=(timer &other);

    void operator-=(timer &other);

    timer operator+(timer &other) const;

    timer operator-(timer &other) const;

    void operator/=(int value);

    timer operator/(int value);

    friend std::ostream &operator<<(std::ostream &os, const timer &t);

    double allInSec() const;

public:
    timer(int mH, int mM, double mS);

    timer();

    static timer average(const std::vector<timer> &timers);

    static timer fastest(std::vector<timer> &timers);

    double fastestDifference(std::vector<timer> &timers);

    bool operator<(timer &other) const;
};


#endif //OPVJEZBE_TIMER_H
