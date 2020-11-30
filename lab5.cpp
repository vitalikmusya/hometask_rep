#include <iostream>
#include "lab5.h"

Topping::Topping(std::string n, Taste t) {
    name = n;
    taste = t;
}
Topping::Topping() {};

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

std::string Topping::getName(){
    return name;
}

Topping FruitSalad::getToping(){
    return topping;
}

Fruit::Fruit(std::string n, int s, std::string c, Taste t) {
    name = n;
    size = s;
    color = c;
    taste = t;
}

FruitSalad::FruitSalad(std::vector<Fruit> fruits) {
    ingredients = fruits;
}

void FruitSalad::print() {
    for (int i = 0; i < ingredients.size(); i++) {
        std::cout << ingredients[i].getName() << " " << ingredients[i].getTaste() << " " << ingredients[i].getSize() << " " << ingredients[i].getColor() << std::endl;
    }
}

void FruitSalad::SetTopping() {
    int sweet = 0;
    int sour = 0;
    int explosive = 0;
    int neutral = 0;
    for (int i = 0; i < ingredients.size(); i++) {
        if (ingredients[i].getTaste() == Taste::SWEET) {
            sweet++;
        } else if (ingredients[i].getTaste() == Taste::SOUR) {
            sour++;
        } else if (ingredients[i].getTaste() == Taste::EXPLOSIVE) {
            explosive++;
        } else if (ingredients[i].getTaste() == Taste::NEUTRAL) {
            neutral++;
        }
    }

    if (sweet >= sour && sweet >= explosive && sweet >= neutral) {
        topping = Topping("chocolate", Taste::SWEET);
    } else if (sour >= sweet && sour >= explosive && sour >= neutral) {
        topping = Topping("lemon", Taste::SOUR);
    } else if (explosive >= sweet && explosive >= sour && explosive >= neutral) {
        topping = Topping("bomb", Taste::EXPLOSIVE);
    } else if (neutral >= sweet && neutral >= sour && neutral >= sour) {
        topping = Topping("switzerland", Taste::NEUTRAL);
    }
}

void FruitSalad::Mix() {
    for (int i = 1; i < ingredients.size(); i++) {
        std::swap(ingredients[i], ingredients[i-1]);
    }
}

void FruitSalad::AddNewFruit(Fruit fruit){
   ingredients.push_back(fruit);
}
int main() {
    std::vector<Fruit> ingredients;
    ingredients.push_back(Fruit("banana", 4, "yellow", Taste::SWEET));
    ingredients.push_back(Fruit("orange", 5, "orange", Taste::SOUR));
    ingredients.push_back(Fruit("apple", 4, "red", Taste::SWEET));
    ingredients.push_back(Fruit("granade", 5, "green", Taste::EXPLOSIVE));
    ingredients.push_back(Fruit("garnet", 5, "bordovyi", Taste::SWEET));
    ingredients.push_back(Fruit("lemon", 5, "yellow", Taste::SOUR));
    

    FruitSalad salad(ingredients);
    salad.AddNewFruit(Fruit("banana", 5, "green", Taste::SWEET));
    salad.print();
    salad.SetTopping();
    salad.Mix();
    std::cout << "\nTopping:" << salad.getToping().getName() << "\nMixed:\n";

    salad.print();

    return 0;
}