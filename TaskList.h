#include <map>

#include "Task.h"

class TaskList {
public:

    TaskList();

    void add_task(Task task);

    bool is_index_exists(unsigned index);
    Task& get_task_by_index(unsigned index);

protected:

    std::map<unsigned, Task> tasks_list;
    unsigned last_index = 0;

};
