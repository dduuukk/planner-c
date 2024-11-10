#include "task-manager.h"

namespace planner
{

    TaskManager::TaskManager()
    {
        // Constructor
    }

    TaskManager::~TaskManager()
    {
        // Destructor
        deleteAllTasks();
    }

    void TaskManager::addTask(int priority, const std::string& name, const std::string& description, const std::string& dateString)
    {
        try {
            Task* newTask = new Task(priority, name, description, dateString);
            this->tasks.push_back(newTask);
        } catch (const std::invalid_argument& e) {
            customError::printWarning("Failed to create task " + std::string(name) + ": " + std::string(e.what()));
        }
    }

    void TaskManager::deleteAllTasks()
    {
        this->tasks.clear();
    }

    void TaskManager::printAllTasks() const
    {
        for (unsigned long i = 0; i < this->tasks.size(); i++)
        {
            this->tasks[i]->printTask();
        }
    }

    void TaskManager::printTask(Task* task) const
    {
        task->printTask();
    }
} // namespace planner