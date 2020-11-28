#pragma once

#include <vector>

struct BinaryTimeUnitsHolder {
    std::vector<bool> binaryHour_{};
    std::vector<bool> binaryMinutes_{};
    std::vector<bool> binarySeconds_{};
};
