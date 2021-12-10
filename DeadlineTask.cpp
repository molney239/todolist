#include "DeadlineTask.h"

DeadlineTask::DeadlineTask(std::string name, TimePoint deadline_time_point, std::string text) : Task(name, text) {
    this->deadline_time_point = deadline_time_point;
}
