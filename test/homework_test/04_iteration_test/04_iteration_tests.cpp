#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify gc content function")
{
	REQUIRE(get_gc_content("AGCTATAG") == .375);
}

TEST_CASE("Verify gc content function 2")
{
	REQUIRE(get_gc_content("CGCTATAG") == .5);
}

TEST_CASE("Verify reverse string function")
{
	REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
}

TEST_CASE("Verify reverse string function 2")
{
	REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Verify DNA complement function")
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
}

TEST_CASE("Verify DNA complement function 2")
{
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}