#include <TimeParser.hpp>

unsigned TimeParser::getHours() const
{
    return timeUnits.hours_;
};
unsigned TimeParser::getMinutes() const
{
    return timeUnits.minutes_;
}
unsigned TimeParser::getSeconds() const
{
    return timeUnits.seconds_;
}

void TimeParser::extractTimeFromExpression()
{
    std::time_t currentTime;
    std::time(&currentTime);
    std::tm* everyTimeUnitHolder;
    everyTimeUnitHolder = std::localtime(&currentTime);

    timeUnits.hours_ = everyTimeUnitHolder->tm_hour;
    timeUnits.minutes_ = everyTimeUnitHolder->tm_min;
    timeUnits.seconds_ = everyTimeUnitHolder->tm_sec;
}
