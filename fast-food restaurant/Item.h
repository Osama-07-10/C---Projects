//
// Created by Osama on 12/10/2025.
//
//
#ifndef ITEM_H
#define ITEM_H

#include "Packing.h"
#include <string>

class Item {
public:
    virtual std::string name() = 0;
    virtual Packing* packing() = 0;
    virtual float price() = 0;

};

#endif // ITEM_H


