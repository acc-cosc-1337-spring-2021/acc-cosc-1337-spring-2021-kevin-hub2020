#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

//Verify get_sales_tax with parameter 10 returns the value .675
//Verify get_sales_tax with parameter 20 returns the value 1.35
TEST_CASE("Test Get Sales Tax.")
{
	REQUIRE(get_sales_tax(10) == 0.675);
	REQUIRE(get_sales_tax(20) == 1.35);
}

//Verify get_tip_amount with parameter 20 and 15% returns the value 3
//Verify get_tip_amount with parameter 20 and 20% returns the value 4
TEST_CASE("Test Get Tip Amount.")
{
	REQUIRE(get_tip_amount(20, 0.15) == 3);
	REQUIRE(get_tip_amount(20, 0.20) == 4);
}