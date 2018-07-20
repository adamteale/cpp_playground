#include <iostream>
#include <memory>
#include "Dog.hpp"


//
//std::ostream& operator<< (std::ostream& os, const Dog& dg)
//{
//    os << dg.GetName() ;
//    return os;
//}

int main() {

    Dog frank("frank", false);
    Dog bill("bill", true);
    Animal *buzz = new Dog("buzz", false);

    Dog fats = frank + bill;
    
//    Food banana{"banana"};
//    Food apple{"apple"};
//    Food kiwi{"kiwi"};
    
//    frank.AddFood(banana);
//    frank.AddFood(apple);
//    frank.AddFood(kiwi);

    std::unique_ptr<Food> banana_ptr = std::make_unique<Food>("banana");
    std::unique_ptr<Food> apple_ptr = std::make_unique<Food>("apple");
    std::unique_ptr<Food> kiwi_ptr = std::make_unique<Food>("kiwi");

    frank.AddFoodPtr(std::move(kiwi_ptr));
    frank.AddFoodPtr(std::move(apple_ptr));
//    fats.AddFoodPtr(std::move(banana_ptr));

//    std::cout << fats << std::endl;
    
//    std::string* k = buzz->GetSpecies();
//    std::cout << k << std::endl;
//    std::cout << frank.GetSpecies() << std::endl;
//    std::cout << buzz->GetSpecies() << std::endl;
//    std::cout << frank.Eats() << std::endl;
    
    std::cout << frank.Eats() << std::endl;

    delete buzz;


}
