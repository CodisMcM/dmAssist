//      mainMenu.h
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class MainMenu
{
private:
    int selection;

public:
    MainMenu(/* args */);
    ~MainMenu();

    void DisplayMenu();
};

