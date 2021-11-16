//  menuEntry.hpp
#include "cityBuilder.hpp"


// class MenuDialog : public City{

//     private:
//         char buffer;
//         City *city;

//     public:
//         MenuDialog();
//         void displayMenu();
//         int getInput();
//         bool handleChoice(int selection);
// };

class MenuDialog {
    private:
    char buffer;

    public:
        MenuDialog();
        void displayMenu();
        int getNumericalInput();
        bool handleChoice(int selection);
        City* city;

};