#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
class Reptile : public Animal{
    private:
        bool isVenomous;
    public:
        Reptile(string name, int age, bool isHungry, float isVenomous):Animal(name, age, isHungry){
        this -> isVenomous = isVenomous;
        }
        bool isVenomous(){
            if (isVenomous){
                cout<<"Venomous"<<endl;
            }else{
                cout<<"Not Venomous"<<endl;
            }
        }
        ~Reptile(){};
};
//define reptile class here









#endif
