#include <iostream>

#include "TaskList.h"

int main() {

    TaskList tl;

    Task my_task("First task");
    tl.add_task(my_task);

    std::cout << my_task.get_time_point().convert_to_string();

}
