#pragma once

#include <cstdint>
#include <string>

class TimeParserStub {
public:
    explicit TimeParserStub(std::string currentDateAndTime) noexcept;

    uint8_t getHours() const;
    uint8_t getMinutes() const;
    uint8_t getSeconds() const;

    std::string getExtractedTime() const;

private:
    std::string currentDateAndTime_{};
    std::string extractedTime_{};
    uint8_t hours_{};
    uint8_t minutes_{};
    uint8_t seconds_{};

    void extractTimeFromExpression();
    void setTimeValuesFromExtractedTime();
};

TimeParserStub::TimeParserStub(std::string currentDateAndTime) noexcept
    : currentDateAndTime_(currentDateAndTime)
{
    extractTimeFromExpression();
    setTimeValuesFromExtractedTime();
}

std::string TimeParserStub::getExtractedTime() const
{
    return extractedTime_;
}

uint8_t TimeParserStub::getHours() const
{
    return hours_;
};
uint8_t TimeParserStub::getMinutes() const
{
    return minutes_;
}
uint8_t TimeParserStub::getSeconds() const
{
    return seconds_;
}

void TimeParserStub::extractTimeFromExpression()
{
    const int firstTimeLiteralPosition = 11;
    const int lastTimeLiteralPosition = 8;

    extractedTime_ = currentDateAndTime_.substr(firstTimeLiteralPosition, lastTimeLiteralPosition);
};

void TimeParserStub::setTimeValuesFromExtractedTime()
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