#ifndef Dog_hpp
#define Dog_hpp

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
private:
    std::string m_name;
public:
    Dog() = delete;
    Dog(std::string name, bool dangerous);
    ~Dog();
    std::string GetName() const&;
};

#endif /* Dog_hpp */
