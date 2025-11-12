# ifndef REPTILE_H
# define REPTILE_H

# include "Animal.h"

# include <iostream>
using namespace std;

class Reptile : public Animal {
    private:
        bool isVenomous;

    public:
        Reptile () : Animal () {
            isVenomous = false;
        }

        Reptile (string name, int age, bool isHungry, bool isVenomous)  : Animal (name, age, isHungry) {
            this->isVenomous = isVenomous;
        }

        ~Reptile () {
            // does nothing
        }

        void display () {
            cout << getName () << "(Age: " << getAge () << ", ";
            if (isVenomous) {
                cout << "Venomous";
            } else {
                cout << "Not Venomous";
            }

            if (getIsHungry ()) {
                cout << "Hungry";
            } else {
                cout << "Not Hungry";
            }
            cout << ")" << endl;
        }
};

# endif
