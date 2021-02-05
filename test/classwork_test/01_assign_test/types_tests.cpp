#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_numbers function") 
{
	REQUIRE(sum_numbers(5, 5) == 10);
}

//Verify Multiply_numbers function with parameter 10 returns the value 50. 
TEST_CASE("Test Multiply Numbers")
{
	REQUIRE(multiply_numbers(10) == 50);

	//Verify Multiply_numbers function with parameter 2 returns the value 10. 
	REQUIRE(multiply_numbers(2) == 10);
}