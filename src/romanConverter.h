#include <string>

std::string convertIntToRoman(int numToConvert)
{
    // constructor of std::String to create a string with character repeated n times
    if (numToConvert == 4)
        return ("IV");
    return std::string(numToConvert,'I');
}