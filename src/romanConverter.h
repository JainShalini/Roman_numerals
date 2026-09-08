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

  appendRomanNumeral(numToConvert, roman, 9, "IX");

  appendRomanNumeral(numToConvert, roman, 5, "V");

  appendRomanNumeral(numToConvert, roman, 4, "IV");

  return roman += repeatCharacter(numToConvert);
}