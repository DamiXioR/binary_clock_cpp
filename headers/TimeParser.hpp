#pragma once

#include <ctime>
#include "TimeUnits.hpp"

class TimeParser {
public:
    unsigned getHours() const;
    unsigned getMinutes() const;
    unsigned getSeconds() const;
    void extractTimeFromExpression();

private:
    std::tm* everyTimeUnitHolder_{};
};
