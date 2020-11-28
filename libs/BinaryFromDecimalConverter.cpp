#include <BinaryFromDecimalConverter.hpp>

std::vector<bool> BinaryFromDecimalConverter::operator()(unsigned decimalLiteral)
{
    const unsigned vectorSize = 6;
    std::vector<bool> bitsHandler{};
    bitsHandler.reserve(vectorSize);

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

    while (bitsHandler.size() < vectorSize) {
        bitsHandler.emplace_back();
    }

    return bitsHandler;
}
