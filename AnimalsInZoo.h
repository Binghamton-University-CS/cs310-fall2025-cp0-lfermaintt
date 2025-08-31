#include "Animal.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class AnimalsInZoo {
    public:
        AnimalsInZoo(Animal animalC){
	    animal = animalC;
	    numAnimals = 1;
        }

        AnimalsInZoo() : numAnimals(0) {};

	void display();

    private:
        Animal animal;
	unsigned int numAnimals = 0;
};
