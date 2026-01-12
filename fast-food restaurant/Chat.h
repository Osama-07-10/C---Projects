//
// Created by Osama on 13/10/2025.
//

#ifndef MINI_PROJECT_CHAT_H
#define MINI_PROJECT_CHAT_H

#include "ColdDrink.h"

class Chat :public ColdDrink {

public:
    std::string name( ){
        return "Chat";
    }
    float price() {
        return 30;
    };
};


#endif //MINI_PROJECT_CHAT_