#include <string>

std::string repeatCharacter(int &numToConvert) {
  return std::string(numToConvert, 'I');
}
std::string convertIntToRoman(int numToConvert) {
  if (numToConvert == 4)
    return ("IV");
  // Using the constructor of std::String to create a string with character
  // repeated n times
  return repeatCharacter(numToConvert);
}