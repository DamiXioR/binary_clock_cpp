#pragma once

#include <BinaryTimeUnitsHolder.hpp>
#include <ClockScreen.hpp>
#include <TimeParser.hpp>

class BinaryClock {
public:
    void createTime();

private:
    BinaryTimeUnitsHolder binaryTimeUnitsHolder_{};
    TimeParser* timeParser_{};
    ClockScreen* clockScreen_{};
    void changeDecimalTimeUnitsToBinary();
};
