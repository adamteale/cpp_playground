#ifndef Food_hpp
#define Food_hpp

#include <iostream>
#include <string>

class Food
{
private:
    std::string m_name;
    int m_totalAvailableBites;

public:

    Food() = delete;
    ~Food();
    
    Food(std::string name);

    //Copy constructor
    Food(const Food& rhs)
    {
        m_name = rhs.m_name;
        m_totalAvailableBites = rhs.m_totalAvailableBites;
    }
    
    std::string GetName() const&;
    
    int BiteTaken()
    {
        if (m_totalAvailableBites >= 0)
        {
            m_totalAvailableBites-- ;
            std::cout << m_name << " : bite taken. " <<  std::to_string(m_totalAvailableBites) << " available.\n";
           return 1;
        }
        else{
            std::cout << m_name << " : devoured.\n";
            return 0;
        }
    }

    
};

#endif /* Food_hpp */
