#pragma once
#include <iostream>
#include <vector>

enum Taste {
    SWEET,
    SOUR,
    NEUTRAL,
    EXPLOSIVE
};

class Fruit {
private:
    Taste taste;

public:
    Fruit(std::string, int, std::string, Taste);
    std::string name;
    int size;
    std::string color;

    std::string getName();
    Taste getTaste();
    int getSize();
    std::string getColor();
    
};