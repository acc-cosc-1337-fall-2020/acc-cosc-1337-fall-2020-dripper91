//write includes statements
#include <loops.h>
#include <iostream>
//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main()
{
	int num = 0;
	char choice;
	
	do
	{
		do
		{
			std::cout << "Enter a number from 1 to 10: ";
			std::cin >> num;
		} while (num < 1 || num > 10);
	
		std::cout << "The factorial of " << num << " is " << factorial(num);
		std::cout << std::endl;

		do
		{
			std::cout << "Enter another number? y/n: ";
			std::cin >> choice;
		} while (choice != 'y' && choice != 'n' && choice && 'Y' && choice != 'N');

	} while (choice != 'n' && choice != 'N');
	
	return 0;
}