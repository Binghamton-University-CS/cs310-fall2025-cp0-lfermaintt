#include "AnimalsInZoo.h"

void AnimalsInZoo::display(){
    cout << AnimalsInZoo::numAnimals;
    if(AnimalsInZoo::animal.getSpecies() != ""){
        cout << " ";
        animal.display();
    }
    else {
        cout << endl;
    }
}
