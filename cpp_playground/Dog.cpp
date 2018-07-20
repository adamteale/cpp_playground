#include "Dog.hpp"

Dog::Dog(std::string name, bool dangerous)
    : m_name(name), Animal("Dog", dangerous)
{
    std::cout << "Constructor Dog \n";
}

Dog::~Dog()
{
    std::cout << "Destructor Dog \n";
}

std::string Dog::GetName() const&
{
    return m_name;
}
