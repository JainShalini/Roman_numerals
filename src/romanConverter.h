#include <string>

std::string repeatCharacter(int &numToConvert) {
  return std::string(numToConvert, 'I');
}

std::string convertIntToRoman(int numToConvert) {
  if (numToConvert == 4)
    return ("IV");

  return repeatCharacter(numToConvert);
}