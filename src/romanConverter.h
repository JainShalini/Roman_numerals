#include <array>
#include <string>
#include <utility>

namespace {
constexpr std::array<std::pair<int, const char*>, 13> RomanNumeralCharacters{{
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"},
}};
} // namespace

std::string convertIntToRoman(int numToConvert) {
  std::string roman;

  if (numToConvert <= 0) {
    return roman;
  }

  for (const auto& [value, numeral] : RomanNumeralCharacters) {
    while (numToConvert >= value) {
      roman += numeral;
      numToConvert -= value;
    }
  }

  return roman;
}