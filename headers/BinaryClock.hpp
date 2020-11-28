#pragma once

#include <BinaryFromDecimalConverter.hpp>
#include <BinaryTimeUnitsHolder.hpp>
#include <ClockScreen.hpp>
#include <TimeParser.hpp>
#include <ctime>
#include <vector>

class BinaryClock {
public:
    void createTime();

private:
    BinaryTimeUnitsHolder binaryTimeUnitsHolder_{};
    TimeParser* timeParser_{};
    ClockScreen* clockScreen_{};
    void changeDecimalTimeUnitsToBinary();
};
