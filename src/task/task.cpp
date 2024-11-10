#include "task.h"


namespace planner
{

    Task::Task(int priority, const std::string& name, const std::string& description, const std::string& dateString)
    {
        this->priority = priority;
        this->name = name;
        this->description = description;
        this->dueDate = dateString;
        if (parseDueDate(dateString) == 0)
        {
            throw std::invalid_argument("Invalid date string");
            // TODO: Implement error handling
            // Destroy the task object
        }
    }
    
    Task::~Task()
    {
        // Destructor
        // TODO: Implement destructor if needed
        delete this;
    }

    void Task::printTask()
    {
        std::cout << "Task: " << name << std::endl;
        std::cout << "Description: " << description << std::endl;
        std::cout << "Priority: " << priority << std::endl;
        std::cout << "Due Date: " << dueDate << std::endl << std::endl;
    }

    int Task::parseDueDate(const std::string& dateString)
    {
        // Make a temp copy of the date string
        std::string tempDate = dateString;
        // std::cout << "Date String: " << tempDate << std::endl;

        // Iterate through the string and find "-" to separate the date
        std::string delimiter = "-";
        size_t pos = 0;
        int i = 0;

        // Split the date string into an array and store in object
        while ((pos = tempDate.find(delimiter)) != std::string::npos) {
            std::string token = tempDate.substr(0, pos);
            // Check if the token is a number
            if (!verifyString(token))
            {
                return 0;
            }
            this->dueDateArray[i] = std::stoi(token);
            tempDate.erase(0, pos + delimiter.length());
            i++;
        }

        // Get last number of due date
        if (!tempDate.empty())
        {
            if (!verifyString(tempDate))
            {
                return 0;
            }
            this->dueDateArray[i] = std::stoi(tempDate);
        }

        return 1;
    }

    bool Task::verifyString(const std::string& s)
    {
        // Print string for debugging
        // std::cout << "String being verified: " << s << std::endl;
        // Check if string is empty
        if (s.empty())
        {
            return false;
        }

        // Check if string is a number
        for (unsigned long i = 0; i < s.length(); i++)
        {
            if (std::isdigit(s[i]) == false)
            {
                return false;
            }
        }
        return true;
    }

}
