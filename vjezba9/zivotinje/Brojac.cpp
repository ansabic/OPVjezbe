//
// Created by antonio on 17. 12. 2021..
//

#include <iostream>
#include "Brojac.h"

void Brojac::addZivotinja(const Zivotinja &zivotinja) {
    zivotinje.push_back(zivotinja);
    std::cout << "dodan: " << zivotinja.getVrsta() << std::endl;
}

void Brojac::printNoge() const {
    int sum = 0;
    for (const Zivotinja &ziv: zivotinje)
        sum += ziv.getBrojNogu();

    std::cout << "Ukupan broj nogu: " << sum << std::endl;
}
