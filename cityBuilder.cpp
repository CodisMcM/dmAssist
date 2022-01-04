#include "Headers/cityBuilder.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;




City::City(int s) {
    size = s;
    cityArray = new int*[s];
    for(int i = 0; i < s; i++){
        cityArray[i] = new int[s];
    }

    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            cityArray[i][j] = -1;
        }
    }
}

void City::createCity(int height) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(cityArray[i][j] != -1){
                cityArray[i][j] = rand()%height;
            }
        }
    }
    return;
}

void City::printCity() {
    cout << "|";
    for(int i = 0; i < size; i++){
        cout << " - ";
    }
    cout << "|" << endl;
    for(int i = 0; i < size; i++) {
        cout << "|";
        for(int j = 0; j < size; j++) {
            cout << " " << cityArray[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "|";
    for(int i = 0; i < size; i++){
        cout << " - ";
    }
    cout << "|" << endl;
    return;
}