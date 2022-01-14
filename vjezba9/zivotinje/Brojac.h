//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_BROJAC_H
#define OPVJEZBE_BROJAC_H


#include <vector>
#include "Zivotinja.h"

class Brojac {
    std::vector<Zivotinja> zivotinje;
public:
    virtual void printNoge() const;

    virtual void addZivotinja(const Zivotinja &zivotinja);
};


#endif //OPVJEZBE_BROJAC_H
