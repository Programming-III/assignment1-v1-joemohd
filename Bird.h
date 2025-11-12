# ifndef BIRD_H
# define BIRD_H

# include "Animal.h"

# include <iostream>
using namespace std;

class Bird : public Animal {
    private:
        float wingSpan;

    public:
        Bird () : Animal () {
            wingSpan = 0.0;
        }

        Bird (string name, int age, bool isHungry, float wingSpan)  : Animal (name, age, isHungry) {
            this->wingSpan = wingSpan;
        }

        ~Bird () {
            // does nothing
        }
};

# endif
