#include <iostream>
#include "FruitSalad.h"
#include "Fruit.h"
#include "Topping.h"


int main() {
    std::vector<Fruit> ingredients;
    ingredients.push_back(Fruit("banana", 4, "yellow", Taste::SWEET));
    ingredients.push_back(Fruit("orange", 5, "orange", Taste::SOUR));
    ingredients.push_back(Fruit("apple", 4, "red", Taste::SWEET));
    ingredients.push_back(Fruit("granade", 5, "green", Taste::EXPLOSIVE));
    ingredients.push_back(Fruit("garnet", 5, "burgundy", Taste::SWEET));
    ingredients.push_back(Fruit("lemon", 5, "yellow", Taste::SOUR));
    

    FruitSalad salad(ingredients);
    salad.AddNewFruit(Fruit("banana", 5, "green", Taste::SWEET));
    salad.print();
    salad.SetTopping();
    salad.Mix();
    std::cout << "\nTopping:" << salad.getTopping().getName() << "\nMixed:\n";

    salad.print();

    return 0;
}