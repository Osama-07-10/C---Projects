//
// Created by Osama on 19/10/2025.
//

#ifndef MINI_PROJECT_ORANGEJUICE_H



#include "ColdDrink.h"


class OrangeJuice : public ColdDrink {
public:
    std::string name() override{
        return "Orange Juice";
    }

    float price()override  {
        return 35.0f;
    }
};


#endif //MINI_PROJECT_ORANGEJUICE_H