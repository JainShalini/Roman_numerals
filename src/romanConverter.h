#include <array>
#include <string>
#include <utility>

namespace {
constexpr std::array RomanNumeralCharacters{
    std::pair{1000, "M"},
    std::pair{900, "CM"},
    std::pair{500, "D"},
    std::pair{400, "CD"},
    std::pair{100, "C"},
    std::pair{90, "XC"},
    std::pair{50, "L"},
    std::pair{40, "XL"},
    std::pair{10, "X"},
    std::pair{9, "IX"},
    std::pair{5, "V"},
    std::pair{4, "IV"},
    std::pair{1, "I"},
};
} // namespace

std::string convertIntToRoman(int numToConvert) {
  std::string roman;

  for (const auto& [value, numeral] : RomanNumeralCharacters) {
    while (numToConvert >= value) {
      roman += numeral;
      numToConvert -= value;
    }
  }
  
  return roman;
}