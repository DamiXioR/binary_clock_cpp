#include <ClockScreen.hpp>

#include <iostream>

void ClockScreen::showScreen(TimeParser* timeParser, BinaryTimeUnitsHolder* binaryTimeUnitsHolder) const
{

    std::cout << "BINARY CLOCK\n";
    std::cout << "PRESS ANY KEY FOR BREAK\n";
    std::cout << "*******************************\n";
    std::cout << "*******************************\n";

    for (const auto& h : binaryTimeUnitsHolder->binaryHour_) {
        std::cout << h << " ";
    }
    std::cout << "\n";

    for (const auto& m : binaryTimeUnitsHolder->binaryMinutes_) {
        std::cout << m << " ";
    }
    std::cout << "\n";

    for (const auto& s : binaryTimeUnitsHolder->binarySeconds_) {
        std::cout << s << " ";
    }
    std::cout << "\n";
    std::cout << "*******************************\n";
    std::cout << "*******************************\n";
}
