#include <ctime>
#include <string>

struct TimePoint {

    TimePoint();
    std::string convert_to_string();

    std::time_t time;

};
