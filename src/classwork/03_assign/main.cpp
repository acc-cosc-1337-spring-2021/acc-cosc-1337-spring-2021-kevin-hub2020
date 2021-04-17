//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include <iostream>

using std::cout;
using std::cin;
using namespace std;

int main() 
{
	int grade;
	cout<<"Enter grade in numbers: ";
	cin>>grade;

	if (grade >= 0 && grade <=100)
	{
		cout<<"The letter grade "<<grade<<" using the IF statement is: "<<get_letter_grade_using_if (grade)<<"\n";
		cout<<"The letter grade "<<grade<<" using the SWITCH CASE is: "<<get_letter_grade_using_switch (grade)<<"\n";
	}
	else
	{
		cout<<"ERROR! Your input is invalid, enter a grade in numbers only";
	}
	return 0;
}