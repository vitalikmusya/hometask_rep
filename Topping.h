#pragma once 
#include <iostream>
#include "Fruit.h"

class Topping {
private:
    std::string name;
    Taste taste;
    
public:
    Topping();
    Topping(std::string, Taste);
    std::string getName();
    
};