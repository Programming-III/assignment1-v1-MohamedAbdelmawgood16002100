#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
class enclosure{
    private:
        Animal* animals;
        int capacity;
        int currentCount;
    public:
        enclosure(Animal* animals, int capacity, int currentCount){
            this->animals = animals;
            this->capacity = capacity;
            this->currentCount = currentCount;
        }
        void addAnimal(Animal* a){
            if (currentCount < capacity){
                animals[currentCount] = *a;
                currentCount++;
            }else{
                cout<<"Maximum capacity of Enclosure reached."<<endl;
            };
        }
        void displayAnimals(){
            for (int i = 0; i < currentCount; i++){
                cout<<animals[i].getName()<<" ("<<animals[i].getAge()<<", "<<animals[i].getIsHungry()<<")"<<endl;
            };
        }
};
//define enclosure class here 








#endif
