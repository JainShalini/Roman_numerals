#include <gtest/gtest.h>
#include <romanConverter.h>

TEST(test_roman_numeral_generation, number_1)
{
    EXPECT_EQ("I",convertIntToRoman(1));
}

TEST(test_roman_numeral_generation, number_2)
{
    EXPECT_EQ("II",convertIntToRoman(2));
}

TEST(test_roman_numeral_generation, number_3)
{
    EXPECT_EQ("III", convertIntToRoman(3));
}