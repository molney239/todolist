#pragma once

#include <map>
#include <ostream>

#include "Task.h"

class TaskList {
public:

    TaskList();

    void add_task(Task task);

    bool is_index_exists(unsigned index);
    Task& get_task_by_index(unsigned index);
    std::map<unsigned, Task> get_task_list();

protected:

    std::map<unsigned, Task> tasks_list;
    unsigned last_index = 0;

};

std::ostream& operator<<(std::ostream& os, TaskList tl);
