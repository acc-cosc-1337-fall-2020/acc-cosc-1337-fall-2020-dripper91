//write include statements
#include "dna.h"
#include "iostream"
#include "string"
//write using statements
using std::string;
using std::endl;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char run = 'Y';

	while (run == 'Y' || run == 'y')
	{
		int choice = 0;
		string dna;

		std::cout << "Enter 1 for Get GC Content." << endl;
		std::cout << "Enter 2 for Get DNA Complement." << endl << endl;
	
		while(choice != 1 && choice != 2)
		{
			std::cin >> choice;
		}

		switch(choice)
		{
			case 1:
			{
				std::cout << "Enter DNA string: ";
				std::cin >> dna;

				std::cout << "GC Content: " << get_gc_content(dna) << endl;

				break;
			}
			case 2:
			{
				std::cout << "Enter DNA string: ";
				std::cin >> dna;

				std::cout << "DNA Complement: " << get_dna_complement(dna) << endl;
			}
		}

		do
		{
			std::cout << "Run again? (y/n): ";
			std::cin >> run;
		} while (run != 'Y' && run != 'y' && run != 'N' && run != 'n');
		
		std::cout << endl;
	}

	return 0;
}