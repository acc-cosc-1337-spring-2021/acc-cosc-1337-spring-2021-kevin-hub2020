//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	int num;

	do
	{
		do
		{
			// Other input thats not an integer will cause an infinite loop and freeze VSC, scary....
			cout<<"\nEnter a positive number as an integer: ";
			cin>>num;

			while ((num <=0) || (num > 10))
			{
				cout<<"\nError! Input must be a positive integer between 1 to 10";
				cout<<"\nEnter a positive number as an integer: ";
				cin>>num;
			}
		} while (num <= 0 || num > 10);
		cout<<"The Factorial of "<<num<<" is: "<<factorial(num);

		cout<<"\nEnter a new number again? (Y/N): ";
		cin>>choice;
	} while (toupper(choice) == 'Y');
	return 0;
}