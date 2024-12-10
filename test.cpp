#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.h"
TEST_SUITE_BEGIN("math");

TEST_CASE("testing addition") {
  CHECK(add(1, 1) == 2);
  CHECK(add(-1, 1) == 0);
  CHECK(add(-1, -1) == -2);
}
TEST_CASE("testing subtraction") {
  CHECK(sub(2, 1) == 0);
  CHECK(sub(2, 2) == 0);
  CHECK(sub(2, 3) == -1);
}

TEST_SUITE_END();