# include "Enclosure.h"
# include "Mammal.h"
# include "Bird.h"
# include "Reptile.h"
# include "Visitor.h"

int main () {
    Enclosure* enclosure = new Enclosure (50);

    Mammal* lion = new Mammal ("Lion", 5, true, "yellow");
    Bird* bird = new Bird ("Parrot", 2, false, 2.3);
    Reptile* reptile = new Reptile ("Snake", 3, true, true);

    enclosure->addAnimal (lion);
    enclosure->addAnimal (bird);
    enclosure->addAnimal (reptile);

    Visitor* visitor = new Visitor ("Sarah Ali", 3);

    cout << "Enclosure 1 Animals:" << endl;
    enclosure->displayAnimals ();
    cout << endl;

    cout << "Visitor Info:";
    visitor->displayInfo ();

    return 0;
}
