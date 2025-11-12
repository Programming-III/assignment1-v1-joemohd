# ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
using namespace std;
class Animal {
    private:
        string name;
        int age;
        bool isHungry;

    public:
        Animal () {
            name = "";
            age = 0;
            isHungry = false;
        }

        Animal (string name, int age, bool isHungry) {
            this->name = name;
            this->age = age;
            this->isHungry = isHungry;
        }

        ~Animal () {
            // does nothing
        }

        void display () {
            cout << name << "(Age: " << age << ", ";
            if (isHungry) {
                cout << "Hungry";
            } else {
                cout << "Not Hungry";
            }
            cout << ")" << endl;
        }

        void feed () {
            // TODO Make sure that it works as expected
            if (!isHungry) {
                isHungry = true;
            }
        }

        string getName () {
            return name;
        }

        int getAge () {
            return age;
        }

        bool getIsHungry () {
            return isHungry;
        }
};

# endif
