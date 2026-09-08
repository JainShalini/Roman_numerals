#include <string>

std::string repeatCharacter(int &numToConvert) {
  return std::string(numToConvert, 'I');
}

void appendRomanNumeral(int &numToConvert, std::string &roman, int romanNumeralValue, std::string romanNumeral) {
  if (numToConvert >=  romanNumeralValue) {
    roman += romanNumeral;
    numToConvert -= romanNumeralValue;
  }
}
std::string convertIntToRoman(int numToConvert) {

  std::string roman("");

  appendRomanNumeral(numToConvert, roman, 10, "X");

  if (numToConvert >= 9) {
    roman += "IX";
    numToConvert -= 9;
  }

  if (numToConvert >= 5) {
    roman += "V";
    numToConvert = numToConvert - 5;
  }

  if (numToConvert >= 4) {
    roman += "IV";
    numToConvert = numToConvert - 4;
  }

  return roman += repeatCharacter(numToConvert);
}