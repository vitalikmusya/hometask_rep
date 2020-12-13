#pragma once
#include <vector>
#include "Fruit.h"
#include "Topping.h"

class FruitSalad {
private:
    std::vector<Fruit> ingredients;
    Topping topping;

public:
    
    FruitSalad(std::vector<Fruit> fruits);
    Topping getTopping();
    void AddNewFruit(Fruit fruit);
    void print();
    void SetTopping();
    void Mix();
};