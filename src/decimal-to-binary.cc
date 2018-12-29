/**
 * Binary-Decimal Converter.
 */

#include "iostream"
#include "algorithm"
#include "decimal-to-binary.hh"

/**
 * -- Algorithm --
 * 
 * 1- Divide the iinteger by 2 - keep notice of the quotient and the remainder.
 * 2- Continue dividing the quotient by 2 until you get a quotient of zero.
 * 3- Return the remainders in the reverse order.
 * 
 * @see https://blog.angularindepth.com/the-simple-math-behind-decimal-binary-conversion-algorithms-d30c967c9724
 */

std::string toBinary(const std::string value)
{
  int dividend, quotient, remainder;
  std::string::size_type sz;
  std::string result;

  dividend = std::stoi(value, &sz);

  while (quotient != 0)
  {
    quotient = dividend / 2;
    remainder = dividend % 2;
    result.append(std::to_string(remainder));
    dividend = quotient;
  }

  std::reverse(result.begin(), result.end());

  return result;
}
