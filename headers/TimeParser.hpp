#pragma once
#include <cstdint>
#include <ctime>
#include <string>

class TimeParser {
public:
    explicit TimeParser(std::time_t& currentDateAndTime) noexcept;
    uint8_t getHours() const;
    uint8_t getMinutes() const;
    uint8_t getSeconds() const;

private:
    std::string currentDateAndTime_{};
    std::string extractedTime_{};
    uint8_t hours_{};
    uint8_t minutes_{};
    uint8_t seconds_{};

    void extractTimeFromExpression();
    void setTimeValuesFromExtractedTime();
};
