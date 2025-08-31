#include "Animal.h"

void Animal::display() {
  cout << Animal::species << " [" << Animal::year_discovered << "]" << endl;
}

string Animal::getSpecies() {
  return Animal::species;
}
