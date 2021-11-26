#include "Task.h"

Task::Task() {}

Task::Task(std::string name, std::string text) : name(name), text(text) {
    this->creation_time_point = TimePoint();
}
