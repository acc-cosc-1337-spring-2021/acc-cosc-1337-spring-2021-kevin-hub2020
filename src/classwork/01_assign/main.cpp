//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>

//write namespace using statements
using std::cout;		using std::cin;

int main() 
{
	int num;
	cout<<"Enter number: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result is: "<<result<<"\n";

	int num1 = 4;
	int result_2 = multiply_numbers(num1);
	cout<<"Result_2 is: "<<result_2<<"\n";

	return 0;
}