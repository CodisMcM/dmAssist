#include "Headers/menuEntry.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

MenuDialog::MenuDialog() {
    displayMenu();
}

void MenuDialog::displayMenu() {
    while (true)
    {
        return;
    }
    

}




 
// MenuDialog::MenuDialog() : City(size){
//     displayMenu();
// }


// int MenuDialog::getInput(){
//     char buffer[256];
//     fgets(buffer, 256, stdin);
//     int i = atoi(buffer);
//     return i;
// }

// void MenuDialog::displayMenu(){
//     while(true){
//         int selection = -1;
//         std::cout << "Welcome to your DM assistant...\nWhat would you like to do today:" << std::endl;
//         std::cout << "\t1. Build a city\n\t2. Print city\n\t3. Exit" << std::endl; 
//         selection = getInput();

//         if(handleChoice)
//             return;
//     }

// }

// bool MenuDialog::handleChoice(int selection){       // Return true to quit program, false to continue
//     switch(selection){
//         case 1:

//             std::cout << "Input the size of this city: ";
//             int size = getInput();
//             City newCity(size);
//             newCity.createCity();
//             break;
//         case 2:
//             newCity.printCity();
//             break;
//         case 3:
//             return true;
//     }
//     return false;
// }