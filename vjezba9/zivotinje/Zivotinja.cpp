//
// Created by antonio on 17. 12. 2021..
//

#include "Zivotinja.h"

#include <utility>

int Zivotinja::getBrojNogu() const {
    return brojNogu;
}

std::string Zivotinja::getVrsta() const {
    return vrsta;
}

void Zivotinja::setBrojNogu(int broj) {
    brojNogu = broj;
}

void Zivotinja::setVrsta(std::string newVrsta) {
    vrsta = std::move(newVrsta);
}
