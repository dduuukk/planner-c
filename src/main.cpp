#include <iostream>
#include "task/task-manager.h"
#include <string>

int main() {
    // Quick example of how to use the Task and TaskManager classes
    planner::TaskManager taskManager;
    taskManager.addTask(1, "Task 1", "Description 1", "2021-01-01");
    taskManager.addTask(2, "Task 2", "Description 2", "2021-02-02");
    taskManager.addTask(3, "Task 3", "Description 3", "2021-03-03");
    // Intentionally add a task with an invalid date
    taskManager.addTask(4, "Task 4", "Description 4", " ");

    taskManager.printAllTasks();
    return 0;
}