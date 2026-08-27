#include <string>

std::string convertIntToRoman(int numToConvert)
{
    if (numToConvert == 1)
        return "I";
    else if (numToConvert == 2)
        return "II";
    
    return "III";
}