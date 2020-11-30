#include <iostream>
#include <vector>

enum Taste {
    SWEET,
    SOUR,
    NEUTRAL,
    EXPLOSIVE
};

class Topping {
private:
    std::string name;
    Taste taste;
    
public:
    Topping();
    Topping(std::string, Taste);
    std::string getName();
    
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


class FruitSalad {
private:
    std::vector<Fruit> ingredients;
    Topping topping;

public:
    
    FruitSalad(std::vector<Fruit> fruits);
    Topping getToping();
    void AddNewFruit(Fruit fruit);
    void print();
    void SetTopping();
    void Mix();
};