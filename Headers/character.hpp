//character.hpp
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>


class Character{

    public:
        Character(std::string name, int id);

    private:
        std::string name;
        int id;

        // CharacterClass myClass;
};

#endif