//
// Created by Osama on 13/10/2025.
//

#ifndef MINI_PROJECT_COLDDRINK_H
#define MINI_PROJECT_COLDDRINK_H
#include <string>

#include "Item.h"
#include "Bottle.h"

class ColdDrink:public Item {
protected:
    Bottle x;

public:

    Packing* packing(){
        return &x;
    }

};
#endif //MINI_PROJECT_COLDDRINK_H