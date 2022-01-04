//      mainMenu.cpp
#include "Headers/mainMenu.h"

MainMenu::MainMenu() { 
    selection = 0;
}

MainMenu::~MainMenu() {

}

void MainMenu::DisplayMenu() {
    while(true) {
        std::string choice;
        std::cin >> choice;
        selection = std::stoi(choice);
        // std::stringstream(choice) >> choice;

        std::cout << selection << std::endl;
        break;
    }

}