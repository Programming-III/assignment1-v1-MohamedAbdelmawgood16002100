#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
class Mammal : public Animal{
    private:
        string furColor;
    public:
        Mammal(string name, int age, bool isHungry, string furColor):Animal(name, age, isHungry){
        this -> furColor = furColor;
        }
        ~Mammal(){};
};
//define mammal class here






#endif
