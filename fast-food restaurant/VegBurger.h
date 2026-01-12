//
// Created by Osama on 13/10/2025.
//

#ifndef MINI_PROJECT_VEGBURGER_H
#define MINI_PROJECT_VEGBURGER_H
#include <string>
#include "Burger.h"


class VegBurger: public  Burger{

public:
    std::string name( ){
        return "VegBurger";
    }
    float price() {
        return 25.0f;
    }




};
#endif //MINI_PROJECT_VEGBURGER_H