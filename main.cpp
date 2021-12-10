#include <iostream>

#include "TodoList.h"

int main() {

    TaskList tl;

    Task task1("Task 1", "No text");
    tl.add_task(task1);
    DeadlineTask task2("Task 2", TimePoint(2), "A task with deadline");
    tl.add_task(task2);

    std::cout << tl;

}
