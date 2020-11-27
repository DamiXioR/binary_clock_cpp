#include <BinaryFromDecimalConverter.hpp>

std::vector<bool> BinaryFromDecimalConverter::operator()(unsigned decimalLiteral)
{
    std::vector<bool> bitsHandler{};

    unsigned firstBit = 1;
    const bool bitIsSet = true;
    const bool bitIsNotSet = false;

    while (decimalLiteral) {
        if (decimalLiteral & firstBit) {
            bitsHandler.emplace_back(bitIsSet);
        }
        else {
            bitsHandler.emplace_back(bitIsNotSet);
        }
        decimalLiteral = decimalLiteral >> firstBit;
    }

    return bitsHandler;
}
