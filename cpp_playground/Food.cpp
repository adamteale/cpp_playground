#include "Food.hpp"

Food::~Food()
{
    std::cout << "destructor food: " << m_name << std::endl;
}

Food::Food(std::string name)
    : m_name(name)
{
    std::cout << "constructor food: " << m_name << std::endl;
}

std::string Food::GetName() const&
{
    return m_name;
}
