//
// Created by antonio on 16. 12. 2021..
//

#include <cstdlib>
#include "algorithm"
#include "timer.h"

void timer::operator+=(timer &other) {
    double allS = this->s + other.s;
    double newS = int(allS) % 60;
    int surplusS = int(allS / 60);

    int allM = this->m + other.m + surplusS;
    int newM = (allM) % 60;
    int surplusM = allM / 60;

    int newH = this->h + other.h + surplusM;
    setH(newH);
    setM(newM);
    setS(newS);
}

void timer::operator-=(timer &other) {
    double sum = std::abs(this->allInSec() - other.allInSec());
    int newH = (int) sum / 3600;
    sum /= 3600;
    int newM = int(sum) / 60;
    sum /= 60;
    double newS = sum;
    setH(newH);
    setM(newM);
    setS(newS);
}

timer::timer(int mH, int mM, double mS) {
    h = mH;
    m = mM;
    s = mS;
}

timer::timer() {
    m = 0;
    h = 0;
    s = 0;
}

double timer::allInSec() const {
    return h * 60 * 60 + m * 60 + s;
}

timer timer::operator+(timer &other) const {
    double allS = this->s + other.s;
    double newS = (int(allS) % 60);
    int surplusS = int(allS) / 60;

    int allM = this->m + other.m + surplusS;
    int newM = (allM) % 60;
    int surplusM = allM / 60;

    int newH = this->h + other.h + surplusM;
    return {newH, newM, newS};
}

void timer::setS(double mS) {
    s = mS;
}

void timer::setM(int mM) {
    m = mM;
}

void timer::setH(int mH) {
    h = mH;
}

timer timer::operator-(timer &other) const {
    double sum = std::abs(this->allInSec() - other.allInSec());
    int newH = int(sum / 3600);
    sum /= 3600;
    int newM = int(sum / 60);
    sum /= 60;
    double newS = sum;
    return {newH, newM, newS};
}

void timer::operator/=(int value) {
    double sum = allInSec();
    sum /= value;
    int newH = int(sum / 3600);
    sum /= 3600;
    int newM = int(sum / 60);
    sum /= 60;
    double newS = sum;
    setH(newH);
    setM(newM);
    setS(newS);
}

timer timer::operator/(int value) {
    double sum = allInSec();
    sum /= value;
    int newH = int(sum / 3600);
    sum -= newH * 3600;
    int newM = int(sum / 60);
    sum -= newM * 60;
    double newS = sum;
    return {newH, newM, newS};
}

timer timer::average(const std::vector<timer> &timers) {
    timer sumTimer = timer();
    for (timer t: timers)
        sumTimer += t;
    timer result = sumTimer / ((int) timers.size());
    return result;
}

std::ostream &operator<<(std::ostream &os, const timer &t) {
    os << t.h << ":" << t.m << ":" << (int) t.s << std::endl;
    return os;
}

bool timer::compare(timer &t1, timer &t2) {
    return t1 < t2;
}

timer timer::fastest(std::vector<timer> &timers) {
    timer min = timers[0];
    std::min_element(timers.begin(), timers.end(), compare);
    for (timer t: timers) {
        if (t < min)
            min = t;
    }
    return min;
}


bool timer::operator<(timer &other) const {
    return (allInSec() - other.allInSec()) < 0;
}

double timer::fastestDifference(std::vector<timer> &timers) {
    timer fastest = timer::fastest(timers);
    return allInSec() - fastest.allInSec();
}


