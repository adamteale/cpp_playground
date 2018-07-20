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

void Animal::AddFood(std::unique_ptr<Food> food)
{
    m_food.push_back(std::move(food));
}


std::string Animal::Eats()
{
    std::string food{m_species + " eats:"};
    for (std::unique_ptr<Food> const &fd : m_food)
    {
        food += " ";
        food += fd->GetName();
    }
    return food;
}

