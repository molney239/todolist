#include <string>

#include "TimePoint.h"

enum TaskStatus {
    ACTIVE,
    RESOLVED
};

class Task {
public:

    Task();

    Task(std::string name, std::string text = "");

    std::string get_name() {
        return this->name;
    }

    std::string get_text() {
        return this->text;
    }

    TimePoint get_time_point() {
        return this->creation_time_point;
    }

    TaskStatus status;

protected:

    std::string name, text;
    TimePoint creation_time_point;

};
