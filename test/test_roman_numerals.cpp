#include <gtest/gtest.h>

std::string convertIntToRoman(int numToConvert)
{
    return "I";
}
TEST(test_roman_numeral_generation, number_1)
{
    EXPECT_EQ("I",convertIntToRoman(1));
}