//
// Created by antonio on 26. 11. 2021..
//

#include "controller.h"

#ifndef OPVJEZBE_VIEW_H
#define OPVJEZBE_VIEW_H


class view {
    controller myController;
public:
    void printBoard();

    view();

    class controller getController();

};


#endif //OPVJEZBE_VIEW_H
