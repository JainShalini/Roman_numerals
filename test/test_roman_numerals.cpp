#include <gtest/gtest.h>
#include <romanConverter.h>

TEST(test_roman_numeral_generation, number_1)
{
    EXPECT_EQ("I",convertIntToRoman(1));
}