#include <iostream>
#include <fstream>
#include "string.h"

#include "Headers/mainMenu.h"

class Asset {

    private:
        int                 primaryKey;
        std::string         name;

        
    public:
        Asset(int primaryKey, std::string name);
        ~Asset();

        std::string getName();
};

Asset::Asset(int primaryKey, std::string name) {
    this->primaryKey = primaryKey;
    this->name = name;
}

Asset::~Asset() {

}

std::string Asset::getName() {
    return name;
}


int main(int argc, char* argv[]) {
    std::cout << "Hello World" << std::endl;

    Asset newAsset(1, "Nova");

    std::cout << "My name is " + newAsset.getName() << std::endl;

    MainMenu trial;
    trial.DisplayMenu();
    
    return 0;
}
