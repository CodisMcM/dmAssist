//      mainMenu.cpp
#include "Headers/mainMenu.h"

MainMenu::MainMenu() { 
    selection = 0;
}

MainMenu::~MainMenu() {

}

void MainMenu::DisplayMenu() {
    std::cout << "   === Main Menu ===   " << std::endl;
    std::cout << "   1. Add Asset   " << std::endl;
    std::cout << "   2. Exit   " << std::endl;


    std::string choice;
    std::cin >> choice;
    selection = std::stoi(choice);
        
    switch(selection) {
        case 1:
            std::cout << "Make an asset" << std::endl;
            break;
        case 2:
            return;
    }
    DisplayMenu();
    
}
