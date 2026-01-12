
 #include "Meal.h"
#include <iostream>
#include "MealBuilder.h"

using namespace std;

void menu() {
    int x;
    Meal* meal ;
    MealBuilder m;
    while (x!=5){
    cout << "Chose what you want?\n";
    cout << "1 : Veggie burger\n";
    cout << "2 : Chicken burger\n";
        cout<<"3 : Chat Colla\n";
        cout<<"4 : Orang Juice\n";
     cout << "5 : print order invoice \n";
        cout<<"6 : Exit !\n";

       cin >> x;

        if (x > 6 || x < 1) {cout << "Invalid choice!\n";}

        int n;

        if (x==6) {exit(1);}

        if (x>0&&x<5) {
         cout << "How many items you wont?\n";
             cin >> n;}
        if (x == 1) {
             m.prepareVegMeal(n);
        } else if (x == 2) {
            m.prepareNonVegMeal(n);
        }
        else if (x == 3) {
             m.preparchat(n);
        }
        else if (x == 4) {
            meal= m.prepareOrangeJuice();
        }
    }
    if (x==5) {
        meal->showitem();
        delete meal;
    }
}


int main() {
    menu();

    return 0;

}