#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include <chrono>
#include <sstream>

// Put under namespace to avoid naming conflicts
namespace planner
{

    class Task
    {
    public:
        Task(int priority, const std::string& name, const std::string& description, const std::string& dateString);  // Constructor
        ~Task(); // Destructor
        void printTask(); // Print task details

        // Member functions

    private:
        // Private member variables
        int priority;
        int weightedPriority;
        std::string name;
        std::string description;
        // TODO: Figure out due date type, string probably not right here
        std::string dueDate;
        int dueDateArray[3];
        // std::chrono::time_point<std::chrono::system_clock> dueDate;

        // Private member functions
        int parseDueDate(const std::string& dateString);
        bool verifyString(const std::string& s);
    };

} // namespace planner

#endif // TASK_H