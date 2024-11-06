#include "task.h"

namespace planner
{

    Task::Task(int priority, const std::string& name, const std::string& description, const std::string& dateString)
    {
        this->priority = priority;
        this->name = name;
        this->description = description;
        this->dueDate = dateString;
    }
    
    Task::~Task()
    {
        // Destructor
        // TODO: Implement destructor if needed
    }

    void Task::printTask()
    {
        std::cout << "Task: " << name << std::endl;
        std::cout << "Description: " << description << std::endl;
        std::cout << "Priority: " << priority << std::endl;
        std::cout << "Due Date: " << dueDate << std::endl;
    }

}
