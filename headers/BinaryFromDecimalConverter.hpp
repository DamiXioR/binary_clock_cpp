#pragma once
#include <cstdint>
#include <vector>

class BinaryFromDecimalConverter {
public:
    std::vector<bool> operator()(unsigned decimalLiteral);
};
