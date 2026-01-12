//
// Created by Osama on 13/10/2025.
//
#ifndef MINI_PROJECT_BURGER_H
 #define MINI_PROJECT_BURGER_H

#include "Item.h"
#include "Warapper.h"

class Burger : public Item {
protected:
    Warapper wrapper;
public:

    Packing* packing() override {
        return &wrapper;
    }


};

#endif //MINI_PROJECT_BURGER_H






