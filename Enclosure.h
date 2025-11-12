# ifndef ENCLOSURE_H
# define ENCLOSURE_H

# include "Animal.h"

# include <iostream>
using namespace std;

class Enclosure {
    private:
        Animal* animals;
        int capacity;
        int currentCount;

    public:
        Enclosure () {
            animals = new Animal [0] ();
            capacity = 0;
            currentCount = 0;
        }

        Enclosure (Animal* animals, int capacity, int currentCount) {
            this->animals = animals;
            this->capacity = capacity;
            this->currentCount = currentCount;
        }

        Enclosure (int capacity) {
            this->animals = new Animal [capacity] ();
            this->capacity = capacity;
            this->currentCount = 0;
        }

        ~Enclosure () {
            // does nothing
        }

        void addAnimal (Animal* a) {
            if (currentCount < capacity) {
                *(animals + currentCount) = *a;
                currentCount ++;
            }
        }

        void displayAnimals () {
            for (int i = 0; i < currentCount; i ++) {
                (animals + i)->display ();
            }
        }
};

# endif
