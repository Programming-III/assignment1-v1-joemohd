# ifndef MAMMAL_H
# define MAMMAL_H

# include "Animal.h"

# include <iostream>
using namespace std;

class Mammal : public Animal {
    private:
        string furColour;

    public:
        Mammal () : Animal () {
            furColour = "";
        }

        Mammal (string name, int age, bool isHungry, string furColour)  : Animal (name, age, isHungry) {
            this->furColour = furColour;
        }

        ~Mammal () {
            // does nothing
        }
};

# endif
