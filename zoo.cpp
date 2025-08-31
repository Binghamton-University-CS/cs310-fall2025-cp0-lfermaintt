#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Asian Water Monitor", 1768);
   Animal animal4("Komodo Dragon", 1910);
   AnimalsInZoo animalZ(animal4);
   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal3.display();
   animal1->display();
   animalZ.display();
   
   delete animal1;
}
