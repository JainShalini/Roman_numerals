#include <string>

std::string repeatCharacter(int &numToConvert) {
  return std::string(numToConvert, 'I');
}

std::string convertIntToRoman(int numToConvert) {

    std::string roman("");

    if (numToConvert >= 10)
    {
        roman += "X";
        numToConvert -= 10;
    }

    if (numToConvert >= 9)
    {
      roman += "IX";
      numToConvert -= 9;
    }

    if (numToConvert >= 5)
    {
       roman += "V";
       numToConvert = numToConvert - 5; 
    }

    if (numToConvert >= 4)
    {
        roman += "IV";
        numToConvert = numToConvert - 4;
    }

    return roman+= repeatCharacter(numToConvert);
}