//  cityBuilder.hpp
#include <iostream>

class City{
    

    protected:
        int size;
    
    private:
        int** cityArray;

    public:
        City(int s);
        void createCity(int height);
        void printCity();
};
