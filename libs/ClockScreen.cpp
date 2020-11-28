#include <ClockScreen.hpp>

#include <iostream>

void ClockScreen::showScreen(TimeParser* timeParser) const
{
    std::cout << timeParser->getHours()
              << " : "
              << timeParser->getMinutes()
              << " : "
              << timeParser->getSeconds()
              << "\n";
}
