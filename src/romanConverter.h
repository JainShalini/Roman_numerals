#include <string>

void appendRomanNumeral(int &numToConvert, std::string &roman, int romanNumeralValue, std::string romanNumeral) {
  while (numToConvert >=  romanNumeralValue) {
    roman += romanNumeral;
    numToConvert -= romanNumeralValue;
  }
}


std::string convertIntToRoman(int numToConvert) {

  std::string roman("");

  appendRomanNumeral(numToConvert, roman, 400, "CD");

  appendRomanNumeral(numToConvert, roman, 100, "C");

  appendRomanNumeral(numToConvert, roman, 90, "XC");

  appendRomanNumeral(numToConvert, roman, 50, "L");

  appendRomanNumeral(numToConvert, roman, 40, "XL");

  appendRomanNumeral(numToConvert, roman, 10, "X");

  appendRomanNumeral(numToConvert, roman, 9, "IX");

  appendRomanNumeral(numToConvert, roman, 5, "V");

  appendRomanNumeral(numToConvert, roman, 4, "IV");

  appendRomanNumeral(numToConvert,roman, 1, "I");

  return roman;
}