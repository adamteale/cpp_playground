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
    std::vector<std::unique_ptr<Food>> m_food_ptrs;
    int m_totalFoodInBelly;

public:

    Animal() = delete;
    Animal(std::string species, bool dangerous);
    virtual ~Animal();

    std::string* GetSpecies() ;
    bool IsDangerous() const&;
    void AddFoodPtr(std::unique_ptr<Food> food);
    void TakeABiteOfSomething();
//    std::string Eats();
    
};

#endif /* Animal_hpp */
