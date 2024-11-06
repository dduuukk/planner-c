#include <iostream>
#include "task/task.h"
#include <string>

int main() {
    // Quick example task creation to verify task structure
    planner::Task exampleTask(3, "Example Task", "This is an example task", "2024-12-31");

    // Print the task details
    exampleTask.printTask();


    return 0;
}