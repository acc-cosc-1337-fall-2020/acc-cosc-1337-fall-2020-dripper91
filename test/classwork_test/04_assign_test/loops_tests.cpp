#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify num 3 returns 6")
{
	REQUIRE(factorial(3)==6);
}

TEST_CASE("Verify num 4 returns 24")
{
	REQUIRE(factorial(4)==24);
}

TEST_CASE("Verify num 5 returns 120")
{
	REQUIRE(factorial(5)==120);
}

