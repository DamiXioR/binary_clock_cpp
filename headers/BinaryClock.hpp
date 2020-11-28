#pragma once

#include <ClockScreen.hpp>
#include <TimeParser.hpp>
#include <ctime>

class BinaryClock {
public:
    void createTime();

private:
    TimeParser* timeParser_{};
    ClockScreen* clockScreen_{};
};
