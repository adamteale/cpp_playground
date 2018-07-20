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
    
//    Dog operator+ (const Dog& )  const;
    Dog operator+ (const Dog& rhs )
    {
        Dog newdg("copydog", (this->IsDangerous() || rhs.IsDangerous() ));
        return newdg;
    }

    
};

#endif /* Dog_hpp */
