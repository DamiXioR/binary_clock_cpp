#pragma once
#include <TimeParser.hpp>
#include <ClockScreen.hpp>
#include <cstdint>
#include <ctime>

class BinaryClock {
public:
    void createTime();

private:
    TimeParser* timeParser_{};
    ClockScreen* clockScreen_{};
};
