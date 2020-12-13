#include "Topping.h"

Topping::Topping(std::string n, Taste t) {
    name = n;
    taste = t;
}
Topping::Topping() {};

std::string Topping::getName(){
    return name;
}