#include "TimePoint.h"
#include <chrono>

TimePoint::TimePoint() {
    this->time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}

std::string TimePoint::convert_to_string()  {
    return std::ctime(&this->time);
}
