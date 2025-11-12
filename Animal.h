#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
class Animal{
    private:
        string name;
        int age;
        bool isHungry;
    public:
        Animal(string name, int age, bool isHungry){
            this->name = name;
            this->age = age;
            this->isHungry = isHungry;
        }
        void display(){
            cout << "Name: " << name << "Age: " << age << " Hungry: " << (isHungry ? "Yes" : "No") << endl;
        }
        void feed(){
            if (isHungry = false){
                cout<< name << "is not hungry."<<endl;
            }
            else{
                cout<< name << "is Hungry."<<endl;
            }
        }
        string getName(){
            return name; 
        }
        int getAge(){
            return age;
        }
        bool getIsHungry(){
            return isHungry;
        }

};
//define animal class here



#endif
