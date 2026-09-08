#include <string>

std::string repeatCharacter(int &numToConvert) {
  return std::string(numToConvert, 'I');
}

std::string convertIntToRoman(int numToConvert) {

    std::string roman("");

    if (numToConvert >= 5)
    {
       roman += "V";
       numToConvert = numToConvert - 5; 
    }

    if (numToConvert == 4)
        return ("IV");

    return roman+= repeatCharacter(numToConvert);
}