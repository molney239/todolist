#pragma once

#include <string>
#include <ostream>

#include "TimePoint.h"

enum TaskStatus {
    ACTIVE,
    RESOLVED
};

class Task {
public:

    Task();
    Task(std::string name, std::string text = "");

    std::string get_name();
    std::string get_text();
    TimePoint get_time_point();

    TaskStatus status;

protected:

    std::string name, text;
    TimePoint creation_time_point;

};

std::ostream& operator<<(std::ostream& os, Task task);
