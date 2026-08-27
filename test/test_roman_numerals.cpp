#include <gtest/gtest.h>
#include <romanConverter.h>

class RomanNumeralTest : public testing::TestWithParam<std::pair<int, std::string>> {};

TEST_P(RomanNumeralTest, test_roman_numeral_generation)
{
    EXPECT_EQ(GetParam().second, convertIntToRoman(GetParam().first));
}

INSTANTIATE_TEST_SUITE_P(, RomanNumeralTest, testing::Values(
    std::make_pair(1, "I"),
    std::make_pair(2, "II"),
    std::make_pair(3, "III")
));