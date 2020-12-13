#include "Fruit.h"

std::string Fruit::getName() {
return name;
}
Taste Fruit::getTaste() {
return taste;
}
int Fruit::getSize() {
return size;
}
std::string Fruit::getColor() {
return color;
}

Fruit::Fruit(std::string n, int s, std::string c, Taste t) {
    name = n;
    size = s;
    color = c;
    taste = t;
}