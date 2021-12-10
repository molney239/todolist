#include "TimePoint.h"

#include <chrono>
#include <cstring>

TimePoint::TimePoint() {
    this->time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}

TimePoint::TimePoint(int hours_from_now) {
    this->time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) + hours_from_now * 3600LL;
}

std::string TimePoint::convert_to_string()  {
    return std::strtok(std::ctime(&this->time), "\n");
}
