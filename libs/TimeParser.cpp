#include <TimeParser.hpp>
#include <ctime>
#include <iostream>

TimeParser::TimeParser(std::time_t& currentTime)
    : currentDateAndTime_(std::ctime(&currentTime))
{
    extractTimeFromExpression();
}

uint8_t TimeParser::getHours() const
{
    return hours_;
};
uint8_t TimeParser::getMinutes() const
{
    return minutes_;
}
uint8_t TimeParser::getSeconds() const
{
    return seconds_;
}

void TimeParser::extractTimeFromExpression()
{
    const int firstTimeLiteralPosition = 11;
    const int lastTimeLiteralPosition = 8;

    extractedTime_ = currentDateAndTime_.substr(firstTimeLiteralPosition, lastTimeLiteralPosition);
}

void TimeParser::setTimeValuesFromExtractedTime()
{
    const int firstHoursLiteralPosition = 0;
    const int lastHoursLiteralPosition = 2;
    const int firstMinutesLiteralPosition = 3;
    const int lastMinutesLiteralPosition = 5;
    const int firstSecondsLiteralPosition = 6;
    const int lastSecondsLiteralPosition = 8;

    hours_ = std::stoi(extractedTime_.substr(firstHoursLiteralPosition, lastHoursLiteralPosition));
    minutes_ = std::stoi(extractedTime_.substr(firstMinutesLiteralPosition, lastMinutesLiteralPosition));
    seconds_ = std::stoi(extractedTime_.substr(firstSecondsLiteralPosition, lastSecondsLiteralPosition));
}
