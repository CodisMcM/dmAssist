//  cityBuilder.hpp
#include <iostream>

class City{
    private:
        int** cityArray;

    protected:
        int size;

    public:
        City(int s);
        void createCity();
        void printCity();
};
