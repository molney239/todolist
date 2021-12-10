#pragma once

#include <ctime>
#include <string>

struct TimePoint {

    TimePoint();
    TimePoint(int hours_from_now);
    std::string convert_to_string();

    std::time_t time;

};
