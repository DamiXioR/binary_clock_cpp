#include <gtest/gtest.h>
#include <TimeParser.hpp>
#include <TimeParserStub.hpp>
#include <chrono>
#include <cstdint>
#include <ctime>

class TimeParserTest : public ::testing::Test {
public:
    std::string testDateAndTime = "Wed Sep 21 10:27:52 2011";
    std::string testDateAndTime2 = "Thu Oct 21 01:05:12 1998";
    std::string testDateAndTime3 = "Mon Apr 21 00:59:59 2020";

    std::string resultTime = "10:27:52";
    std::vector<uint8_t> everyTimeValue{10, 27, 52};
    std::string resultTime2 = "01:05:12";
    std::vector<uint8_t> everyTimeValue2{1, 05, 12};
    std::string resultTime3 = "00:59:59";
    std::vector<uint8_t> everyTimeValue3{0, 59, 59};

    TimeParserStub tps = TimeParserStub(testDateAndTime);
    TimeParserStub tps2 = TimeParserStub(testDateAndTime2);
    TimeParserStub tps3 = TimeParserStub(testDateAndTime3);
};

TEST_F(TimeParserTest, ShouldReturnExtractedTime)
{
    tps.getExtractedTime();
    EXPECT_EQ(tps.getExtractedTime(), resultTime);

    tps2.getExtractedTime();
    EXPECT_EQ(tps2.getExtractedTime(), resultTime2);

    tps3.getExtractedTime();
    EXPECT_EQ(tps3.getExtractedTime(), resultTime3);
}

TEST_F(TimeParserTest, ShouldReturnEveryTimeValueFromExtractedTime)
{
    EXPECT_EQ(tps.getHours(), everyTimeValue[0]);
    EXPECT_EQ(tps.getMinutes(), everyTimeValue[1]);
    EXPECT_EQ(tps.getSeconds(), everyTimeValue[2]);

    EXPECT_EQ(tps2.getHours(), everyTimeValue2[0]);
    EXPECT_EQ(tps2.getMinutes(), everyTimeValue2[1]);
    EXPECT_EQ(tps2.getSeconds(), everyTimeValue2[2]);

    EXPECT_EQ(tps3.getHours(), everyTimeValue3[0]);
    EXPECT_EQ(tps3.getMinutes(), everyTimeValue3[1]);
    EXPECT_EQ(tps3.getSeconds(), everyTimeValue3[2]);
}