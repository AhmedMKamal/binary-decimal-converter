/**
 * Binary-Decimal Converter.
 */

#include "iostream"
#include "decimal-to-binary.hh"
#include "binary-to-decimal.hh"

int main()
{
  std::string converter, originalValue, result;

  std::printf("Select case:\n1- Binary To Decimal\n2- Decimal To Binary\n");

  std::getline(std::cin, converter);

  while (converter[0] != '1' && converter[0] != '2')
  {
    std::printf("Select valid case (1 or 2)\n");
    std::getline(std::cin, converter);
  }

  if (converter[0] == '1') // Binary To Decimal.
  {
    std::printf("Enter binary value\n");
    std::getline(std::cin, originalValue);
    result = std::to_string(toDecimal(originalValue));
  }
  else // Decimal To Binary.
  {
    std::printf("Enter decimal value\n");
    std::getline(std::cin, originalValue);
    result = toBinary(originalValue);
  }

  std::printf("%s to %s = %s\n",
              originalValue.c_str(),
              converter[0] == '1' ? "decimal" : "binary",
              result.c_str());

  return 0;
}
