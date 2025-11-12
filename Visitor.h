# ifndef VISITOR_H
# define VISITOR_H

# include <iostream>
using namespace std;

class Visitor {
    private:
        string visitorName;
        int ticketsBought;

    public:
        Visitor () {
            visitorName = "";
            ticketsBought = 0;
        }

        Visitor (string visitorName, int ticketsBought) {
            this->visitorName = visitorName;
            this->ticketsBought = ticketsBought;
        }

        ~Visitor () {
            // does nothing
        }

        void displayInfo () {
            cout << "Name: " << visitorName << endl << "Tickets Bought: " << ticketsBought << endl;
        }
};

# endif
