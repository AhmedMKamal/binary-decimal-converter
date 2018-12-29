/**
 * Binary-Decimal Converter.
 */

#include "iostream"
#include "binary-to-decimal.hh"

/**
 * -- Algorithm --
 * 
 * 1- Start from the left.
 * 2- Take your current total, multiply it by two and add the current digit.
 * 3- Continue until there are no more digits left.
 * 
 * @see https://blog.angularindepth.com/the-simple-math-behind-decimal-binary-conversion-algorithms-d30c967c9724
 */

int toDecimal(const std::string value)
{
  int total = 0;

  for (int i = 0; i < value.length(); i++)
  {
    total = (total * 2) + (value[i] - '0');
  }

  return total;
}
