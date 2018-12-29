/**
 * Binary-Decimal Converter.
 */

#include "iostream"
#include "binary-to-decimal.hh"
#include "test-object.hh"

int main()
{
  TestObject<std::string, int> objs[5];

  objs[0].expect = "100111110100";
  objs[0].toBe = 2548;

  objs[1].expect = "1100110010100";
  objs[1].toBe = 6548;

  objs[2].expect = "1111011010111";
  objs[2].toBe = 7895;

  objs[3].expect = "10011010011";
  objs[3].toBe = 1235;

  objs[4].expect = "10000100010100";
  objs[4].toBe = 8468;

  for (auto &obj : objs)
  {
    int result = toDecimal(obj.expect);
    std::printf("expect %s to equal %i, got %i -> %s\n",
                obj.expect.c_str(),
                obj.toBe,
                result,
                result == obj.toBe ? "Passed" : "Failed");
  }

  return 0;
}
