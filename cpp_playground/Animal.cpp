#include "Animal.hpp"

Animal::Animal(std::string species, bool dangerous)
    : m_species(species), m_dangerous(dangerous), m_food()
{
    
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
    m_food_ptr.push_back(std::move(food));
}

void Animal::AddFood(Food& food)
{
    m_food.push_back(food);
}

std::string Animal::Eats()
{
    std::string food{m_species + " eats:"};
//    for (std::unique_ptr<Food> const &fd : m_food)
//    {
//        food += " ";
//        food += fd->GetName();
//    }
    for (Food const &fd : m_food)
    {
        food += " ";
        food += fd.GetName();
    }

    return food;
}

