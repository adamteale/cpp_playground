#include <iostream>
#include <memory>
#include <vector>


class Project
{
private:
    std::string m_name;
    int m_statusid;
public:
    Project() = delete;
    Project(std::string name) : m_name(name), m_statusid{} {};
    ~Project()
    {
        std::cout << "desctructor: Project\n";
    }
    std::string GetProjectName() const {return m_name;}
    std::string GetStatus() const {return std::to_string(m_statusid);}

    void PrintProjectNameAndStatus() { std::cout << GetProjectName() << " : " << GetStatus() << "\n" ; }
    void UpdateProjectStatus(int status){ m_statusid = status;}
};


class Person
{
private:
    std::string m_name;
    std::vector<Project*> m_projects;
    
public:
    Person() = delete;
    Person(std::string name) : m_name(name) {} ;
    
    void AddProject(Project* aproject)
    {
        m_projects.push_back(aproject);
        std::cout << "added project: " << aproject->GetProjectName() << std::endl;
    }
    
    void PrintProjects()
    {
        for (auto& project : m_projects)
        {
            project->PrintProjectNameAndStatus();
        }
    }

};


int main() {
    
    // std::vector projects used to store std::unique_ptr<Project>
    // as the vector grow we won't lose 
    std::vector<std::unique_ptr<Project>> projects{};

    std::unique_ptr<Project> bigproject = std::make_unique<Project>("Moon Launch");
    std::unique_ptr<Project> journeytomars = std::make_unique<Project>("Journey to Mars");

    Person john("john");

    projects.push_back(std::move(bigproject));
    john.AddProject(projects.back().get());
    projects.push_back(std::move(journeytomars));
    john.AddProject(projects.back().get());

    for (std::unique_ptr<Project>& aproject : projects )
    {
        aproject->PrintProjectNameAndStatus();
    }
    
//    john.AddProject(std::move(bigproject));
//    john.AddProject(std::move(journeytomars));
//    john.PrintProjects();
//    bigproject->PrintProjectNameAndStatus();
    // Can't do this as it can now only be modified by "john" ?
//    bigproject->UpdateProjectStatus(1);
//    john.PrintProjects();

}


