
#ifndef MEALBUILDER_H
#define MEALBUILDER_H

#include "Meal.h"
#include "VegBurger.h"
#include "ChickenBurger.h"
#include "Chat.h"
#include "OR.h"



class MealBuilder {
public:
    MealBuilder() {};
    Meal* meal = new Meal();
    Meal* prepareVegMeal(int quantity = 1) {

        for(int i = 0; i < quantity; i++) {
            meal->additem(new VegBurger());
        }
        return meal;
    }

    Meal* prepareNonVegMeal(int quantity = 1) {

        for(int i = 0; i < quantity; i++) {
            meal->additem(new ChickenBurger());
        }
        return meal;
    }
        Meal* preparchat(int quantity = 1) {

            for(int i = 0; i < quantity; i++) {
                meal->additem(new Chat());
            }
            return meal;
        ;
    }
    Meal* prepareOrangeJuice(int quantity = 1) {

        for(int i = 0; i < quantity; i++) {
            meal->additem(new OrangeJuice());
        }
        return meal;
    }


};

#endif // MEALBUILDER_H