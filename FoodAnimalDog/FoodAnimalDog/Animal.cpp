#include "Animal.hpp"
#include "Food.hpp"

Animal::Animal(std::string species, bool dangerous)
: m_species(species), m_dangerous(dangerous), m_food_ptrs{}, m_totalFoodInBelly{}
{
    /* initialize random seed: */


    std::cout << "Animal Contructor: " << m_species << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor: " << m_species << std::endl;
}

std::string* Animal::GetSpecies()
{
    return &m_species;
}

bool Animal::IsDangerous() const&
{
    return m_dangerous;
}

void Animal::AddFoodPtr(std::unique_ptr<Food> food)
{
    m_food_ptrs.push_back(std::move(food));
}

void Animal::TakeABiteOfSomething()
{
    /*
     pick a random Food from animal's available food and take by reference
     */
    std::srand(std::time(nullptr));
    int randomfood = rand() % m_food_ptrs.size();
    std::unique_ptr<Food>& afood = m_food_ptrs[randomfood];

    // take a bite
    afood->BiteTaken();
    
}


//std::string Animal::Eats()
//{
//    std::string food{m_species + " eats:"};
//
//    for (std::unique_ptr<Food> fd : m_food_ptr)
//    {
//        food += " ";
//        food += fd->GetName();
//    }
//
//    return food;
//}

