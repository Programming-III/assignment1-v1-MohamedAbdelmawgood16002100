#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    Mammal Animal1 = ("Lion", 5, 1,"orange");
    Bird Animal2 = ("Parrot", 2, 0, 5.48);
    Reptile Animal3 = ("Snake", 3, 1, 1);
    
    
    return 0;
}
