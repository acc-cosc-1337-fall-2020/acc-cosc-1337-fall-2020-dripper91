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
	
	std::cout << "Enter a number to factorialize: ";
	std::cin >> num;
	
	std::cout << "\nThe factorialized product is " << factorial(num);

	return 0;
}