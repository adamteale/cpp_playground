#include <iostream>
#include <memory>
#include <vector>
//#include <ctime>
//#include "Dog.hpp"



class Project
{
private:
    std::string m_name;
public:
    Project() = delete;
    Project(std::string name) : m_name(name) {};
    ~Project()
    {
        std::cout << "desctructor: Project\n";
    }
    std::string GetProjectName() {return m_name;}
};


class Person
{
private:
    std::string m_name;
    std::vector<std::unique_ptr<Project>> m_projects;

public:
    Person() = delete;
    Person(std::string name) : m_name(name) {} ;
    
    void AddProject(std::unique_ptr<Project> aproject)
    {
        m_projects.push_back(aproject);
    }
    
    void PrintProjects()
    {
        for (auto& project : m_projects)
        {
            std::cout << project->GetProjectName() << std::endl;
        }
    }
};






int main() {

    std::unique_ptr<Project> bigproject = std::make_unique<Project>("Moon Launch");
    std::unique_ptr<Project> journeytomars = std::make_unique<Project>("Journey to Mars");

    Person john("john");
    
    john.AddProject(std::move(bigproject));
    john.AddProject(std::move(journeytomars));
    
    john.PrintProjects();
    
//    // create food
//    std::unique_ptr<Food> banana_ptr = std::make_unique<Food>("banana");
//    std::unique_ptr<Food> apple_ptr = std::make_unique<Food>("apple");
//    std::unique_ptr<Food> kiwi_ptr = std::make_unique<Food>("kiwi");
//
//    // create animals/dogs
//    Dog frank("frank", false);
//    Dog susie("susie", true);
//    // Dog childdog = frank + bill;
//
//    // give animals food to "share"
//    frank.AddFoodPtr(std::move(kiwi_ptr));
//    frank.AddFoodPtr(std::move(apple_ptr));
//
//    // animal eating
//    std::srand(static_cast<unsigned int>(std::time(nullptr)));
//    int randomfood = std::rand();
//
//    for (int i = 0; i< randomfood; i++)
//    {
//        frank.TakeABiteOfSomething();
//    }

    


}

