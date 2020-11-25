#include <gtest/gtest.h>
#include <BinaryFromDecimalConverter.hpp>

#include <vector>

class BinaryFromDecimalConverterTest : public ::testing::Test {
public:
    BinaryFromDecimalConverter converter{};
    std::vector<bool> bits{};

    const unsigned testValue = 27;
    const unsigned testValue2 = 36;
    const unsigned testValue3 = 254;

    // values are inserted in opposite order

    const std::vector<bool> resultFromTestValue = {1, 1, 0, 1, 1};
    const std::vector<bool> resultFromTestValue2 = {0, 0, 1, 0, 0, 1};
    const std::vector<bool> resultFromTestValue3 = {0, 1, 1, 1, 1, 1, 1, 1};
};

TEST_F(BinaryFromDecimalConverterTest, ShouldReturnBinaryEquivalentOfDecimalLiteral)
{
    bits = converter(testValue);
    EXPECT_EQ(bits, resultFromTestValue);

    bits = converter(testValue2);
    EXPECT_EQ(bits, resultFromTestValue2);

    bits = converter(testValue3);
    EXPECT_EQ(bits, resultFromTestValue3);
}