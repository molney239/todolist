#pragma once

#include "Task.h"

class DeadlineTask : public Task {
public:

    DeadlineTask(std::string name, TimePoint deadline_task_point, std::string text = "");

protected:

    TimePoint deadline_time_point;

};
