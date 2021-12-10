#include "Task.h"

Task::Task() {}

Task::Task(std::string name, std::string text) : name(name), text(text) {
    this->creation_time_point = TimePoint();
}

std::string Task::get_name() {
    return this->name;
}

std::string Task::get_text() {
    return this->text;
}

TimePoint Task::get_time_point() {
    return this->creation_time_point;
}

std::ostream& operator<<(std::ostream& os, Task task) {
    os << "Name: " << task.get_text() << "\n";
    os << "Date: " << task.get_time_point().convert_to_string() << "\n";
    if (!task.get_text().empty()) os << "Text: " << task.get_text() << "\n";
    return os;
}
