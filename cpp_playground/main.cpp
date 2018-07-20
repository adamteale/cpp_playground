#include <iostream>
#include <memory>
#include "Dog.hpp"

int main() {

    Dog frank("frank", false);
    Animal *buzz = new Dog("buzz", false);
    
    std::unique_ptr<Food> banana = std::make_unique<Food>("banana");
    std::unique_ptr<Food> apple = std::make_unique<Food>("apple");
    std::unique_ptr<Food> kiwi = std::make_unique<Food>("kiwi");
    
    frank.AddFood(std::move(kiwi));
    frank.AddFood(std::move(apple));
    frank.AddFood(std::move(banana));

    std::string* k = buzz->GetSpecies();
    std::cout << k << std::endl;
    std::cout << frank.GetSpecies() << std::endl;
    std::cout << buzz->GetSpecies() << std::endl;
    std::cout << frank.Eats() << std::endl;
    
    delete buzz;
    
    return 0;

}
