
#ifndef MINI_PROJECT_MEAL_H
#define MINI_PROJECT_MEAL_H

#include "arraylist.h"
#include "Item.h"
#include "VegBurger.h"
#include "ChickenBurger.h"
#include <iostream>

class Meal {
private:
    ArrayList<Item*> items;

public:
void removeItem(Item* x) {
    items.remove(x);
}
    void additem(Item* x) {
        items.add(x);
    }

    float getCost() {
        float total = 0.0f;
        int s = items.size();
        for(int i = 0; i < s; i++) {
            total += items.get(i)->price();
        }
        return total;
    }

    void showitem() {
        int s = items.size();
        std::cout << "\n=== Your Order is ===" << std::endl;
        for(int i = 0; i < s; i++) {
            Item* current = items.get(i);

            std::cout  << current->name()<<" ";
            std::cout <<current->packing()->pack();
            std::cout<< ", Price: " << current->price() << std::endl;



        }
        std::cout << "Number of items: " << s << std::endl;
        std::cout << "Total cost: " << getCost() << std::endl;

    }

    ~Meal() {
        int s = items.size();
        for(int i = 0; i < s; i++) {
            delete items.get(i);
        }
    }
};

#endif // MINI_PROJECT_MEAL_H