//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_ZIVOTINJA_H
#define OPVJEZBE_ZIVOTINJA_H

#include "string"

class Zivotinja {
    int brojNogu;
    std::string vrsta;
public:
    int getBrojNogu() const;

    void setBrojNogu(int broj);

    std::string getVrsta() const;

    void setVrsta(std::string newVrsta);

};


#endif //OPVJEZBE_ZIVOTINJA_H
