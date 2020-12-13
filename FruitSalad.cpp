#include "FruitSalad.h"

Topping FruitSalad::getTopping(){
    return topping;
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