#include "variables.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2


// Multiply tax_rate * meal_amount then return their product
double get_sales_tax(double meal_amount)
{
	double tax_rate = 0.0675;
	return tax_rate * meal_amount;
}

// Multiply meal_amount * tip_rate then return their product
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}