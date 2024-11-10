#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H


#include "task.h"
#include "../error/error.h"
#include <vector>
#include <iostream>

namespace planner
{

    class TaskManager
    {
    public:
        TaskManager();
        ~TaskManager();

        void addTask(int priority, const std::string& name, const std::string& description, const std::string& dateString);
        // void printTasks();
        // void removeTask(int index);
        // void sortTasks();
        // void saveTasks();
        // void loadTasks();
        // void deleteTask(Task* task);
        void deleteAllTasks();
        void printAllTasks() const;

    private:
        // Private member variables
        std::vector<Task*> tasks; // Vector of tasks

        // Private member functions
        void printTask(Task* task) const;
    };

} // namespace planner


#endif // TASK_MANAGER_H