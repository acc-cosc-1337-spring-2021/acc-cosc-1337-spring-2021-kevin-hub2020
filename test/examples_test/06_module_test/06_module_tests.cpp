#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test new bank account object balance")
{
	BankAccount account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test new bank account with given begin balance")
{
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account deposit")
{
	BankAccount account;
	account.deposit(50);

	REQUIRE(account.get_balance() == 50);

}

TEST_CASE("Test bank account deposit with given begin balance")
{
	BankAccount account(100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test bank account deposit with negative amount")
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test bank account withdraw")
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(10);
	REQUIRE(account.get_balance() == 40);
}

TEST_CASE("Test bank account withdraw with a given begin balance")
{
	BankAccount account(100);
	account.withdraw(10);

	REQUIRE(account.get_balance() == 90);
}

TEST_CASE("Test Bank account withdraw with negative amount")
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(-10);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test Bank account withdraw with NSF")
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(51);
	REQUIRE(account.get_balance() == 50);
}