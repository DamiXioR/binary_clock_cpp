#pragma once
#include <cstdint>
#include <ctime>
#include <string>

struct tUnits {
    unsigned hours_{};
    unsigned minutes_{};
    unsigned seconds_{};
};

inline tUnits timeUnits;

class TimeParser {
public:
    unsigned getHours() const;
    unsigned getMinutes() const;
    unsigned getSeconds() const;
    void extractTimeFromExpression();

private:
    std::tm* everyTimeUnitHolder_{};
};
