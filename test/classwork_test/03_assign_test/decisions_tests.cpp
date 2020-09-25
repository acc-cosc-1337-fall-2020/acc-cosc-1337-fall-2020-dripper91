#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include <decision.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test If/Else Statement")
{
	REQUIRE(get_letter_grade_using_if(96) == "A");
}

TEST_CASE("Test If/Else Statement 2")
{
	REQUIRE(get_letter_grade_using_if(78) == "C");
}

TEST_CASE("Test Switch Statement")
{
	REQUIRE(get_letter_grade_using_switch(69) == "D");
}

TEST_CASE("Test Switch Statement 2")
{
	REQUIRE(get_letter_grade_using_switch(117) == "ERROR");
}