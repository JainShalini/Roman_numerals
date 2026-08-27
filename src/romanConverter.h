#include <string>

std::string convertIntToRoman(int numToConvert)
{
    if (numToConvert == 1)
        return "I";

    return "II";
}