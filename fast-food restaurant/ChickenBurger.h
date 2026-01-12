//
// Created by Osama on 13/10/2025.
//

#ifndef MINI_PROJECT_CHICKENBURGER_H
#define MINI_PROJECT_CHICKENBURGER_H



class ChickenBurger: public  Burger{

public:

 std::string name( ){
  return "ChickenBurger";
 }
float price() {
  return 50.5;
 }

};
#endif //MINI_PROJECT_CHICKENBURGER_H