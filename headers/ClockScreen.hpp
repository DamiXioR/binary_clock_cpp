#pragma once

#include <TimeParser.hpp>
#include <BinaryTimeUnitsHolder.hpp>

class ClockScreen {
public:
    void showScreen(TimeParser* timeParser, BinaryTimeUnitsHolder* binaryTimeUnitsHolder) const;
};
