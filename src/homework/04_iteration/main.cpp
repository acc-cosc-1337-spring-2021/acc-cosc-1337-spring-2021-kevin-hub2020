#include "dna.h"
#include <iostream>
using namespace std;

//write include statements
using std::cout;
using std::cin;
using std::string;

//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna;
	string choice;
	char go_again;
	cout<<"Enter 1 for Get GC Content"<<"\n";
	cout<<"Enter 2 for Get DNA Complement"<<"\n";
	cout<<"------------------------------"<<"\n";

	
	do
	{
		cout<<"Enter choice: ";
		cin>>choice;
		cout<<"\n";
		

		if (choice == "1")
		{
			cout<<"Enter a valid DNA strand with all caps: ";
			cin>>dna;
			cout<<"The GC Content is: "<<get_gc_content(dna)<<"\n";
		}

		else if (choice == "2")
		{
			cout<<"Enter a valid DNA strand with all caps: ";
			cin>>dna;
			cout<<"The DNA Content is: "<<get_dna_complement(dna)<<"\n";
		}
		else
		{
			cout<<"Invalid choice"<<"\n";
		}


		cout<<"\nDo your want to try again? (y or Y for yes, n or N for no): ";
		cin>>go_again;
	}
	while (go_again == 'y'||go_again == 'Y');
	
	return 0;
}