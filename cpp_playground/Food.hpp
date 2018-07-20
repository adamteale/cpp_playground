#ifndef Food_hpp
#define Food_hpp

#include <iostream>
#include <string>

class Food
{
private:
    std::string m_name;
public:
    Food() = delete;
    ~Food();
    Food(std::string name);
    std::string GetName() const&;
};

#endif /* Food_hpp */
