#include <iostream>
#include <fstream>      // Temporary until I can host a database and use it instead. 
                        // Read and write from this file will do as a persistent data capture source especially if I use Github for version control and backups.
#include "Headers/menuEntry.hpp"

int main(int argc, char* argv[]){

    std::ofstream dataFile;
    dataFile.open(argv[1]);

    if(dataFile.is_open()){
        // dataFile << "Writing to the file";
    }else{std::cout << "Error Opening File!!" << std::endl;}
    
    
    dataFile.close();

    MenuDialog mainMenu;
    mainMenu.city = new City(10);
    //mainMenu.city->createCity();
    mainMenu.city->printCity();    
    
    return 0;
}




// Usage:           g++ -Wall dmHelper.cpp -o exe 
//                  ./exe data.txt
