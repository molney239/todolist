#include "Task.h"

class DeadlineTask : Task {

    DeadlineTask(std::string name, std::time_t deadline_task_point, std::string text = "");

protected:

    std::time_t deadline_time_point;

};
