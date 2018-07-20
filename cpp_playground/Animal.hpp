#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
#include <string>
#include <vector>
#include "Food.hpp"

class Animal
{
private:
    std::string m_species;
    bool m_dangerous;
    std::vector<Food> m_food;
    std::vector<std::unique_ptr<Food>> m_food_ptr;

public:
    Animal() = delete;
    Animal(std::string species, bool dangerous);
    virtual ~Animal();
    std::string* GetSpecies() ;
    
    bool IsDangerous() const&;
    
    void AddFoodPtr(std::unique_ptr<Food> food);
    void AddFood(Food& food);
    
    std::string Eats();
    
};

#endif /* Animal_hpp */
