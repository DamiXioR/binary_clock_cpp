#pragma once
#include <TimeParser.hpp>
#include <cstdint>
#include <ctime>

class BinaryClock {
public:
    void createTime();

private:
    TimeParser* timeParser_{};
};
