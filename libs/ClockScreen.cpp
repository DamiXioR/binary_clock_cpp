#include <ClockScreen.hpp>

#include <algorithm>
#include <iostream>

void ClockScreen::showScreen(TimeParser* timeParser, BinaryTimeUnitsHolder* binaryTimeUnitsHolder) const
{
    std::cout << "BINARY CLOCK\n";
    std::cout << "PRESS ANY KEY FOR BREAK\n";
    std::cout << "*******************************\n";
    std::cout << "*******************************\n";

    std::for_each(binaryTimeUnitsHolder->binaryHour_.crbegin(), binaryTimeUnitsHolder->binaryHour_.crend(),
                  [](bool everyBit) {
                      std::cout << everyBit << " ";
                  });
    std::cout << "\n";

    std::for_each(binaryTimeUnitsHolder->binaryMinutes_.crbegin(), binaryTimeUnitsHolder->binaryMinutes_.crend(),
                  [](bool everyBit) {
                      std::cout << everyBit << " ";
                  });
    std::cout << "\n";

    std::for_each(binaryTimeUnitsHolder->binarySeconds_.crbegin(), binaryTimeUnitsHolder->binarySeconds_.crend(),
                  [](bool everyBit) {
                      std::cout << everyBit << " ";
                  });
    std::cout << "\n";
    
    std::cout << "*******************************\n";
    std::cout << "*******************************\n";
}
