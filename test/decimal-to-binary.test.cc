/**
 * Binary-Decimal Converter.
 */

#include "iostream"
#include "decimal-to-binary.hh"
#include "test-object.hh"

int main()
{
  TestObject<int, std::string> objs[5];

  objs[0].expect = 2548;
  objs[0].toBe = "100111110100";

  objs[1].expect = 6548;
  objs[1].toBe = "1100110010100";

  objs[2].expect = 7895;
  objs[2].toBe = "1111011010111";

  objs[3].expect = 1235;
  objs[3].toBe = "10011010011";

  objs[4].expect = 8468;
  objs[4].toBe = "10000100010100";

  for (auto &obj : objs)
  {
    std::string value = std::to_string(obj.expect),
                result = toBinary(value);
    std::printf("expect %i to equal %s, got %s -> %s\n",
                obj.expect,
                obj.toBe.c_str(),
                result.c_str(),
                result == obj.toBe ? "Passed" : "Failed");
  }

  return 0;
}
