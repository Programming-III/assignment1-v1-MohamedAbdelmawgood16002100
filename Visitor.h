#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;
class Visitor{
    private:
        string visitorName;
        int ticketsBought;
    public:
        Visitor(string visitorName, int ticketsBought){
            this->visitorName = visitorName;
            this->ticketsBought = ticketsBought;
        }
        void displayInfo(){
            cout<<"Visitor info:"<<endl;
            cout<<"Name: "<<visitorName<<endl;
            cout<<"Tickets bought: "<<ticketsBought<<endl;
        }
        ~Visitor(){};
};
//define visitor class here







#endif
