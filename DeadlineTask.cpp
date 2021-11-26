#include "DeadlineTask.h"

DeadlineTask::DeadlineTask(std::string name, std::time_t deadline_task_point, std::string text) : Task(name, text) {
    this->deadline_time_point = deadline_task_point;
}
