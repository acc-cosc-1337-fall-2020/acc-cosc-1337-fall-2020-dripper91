//Write the include statement for types.h here
#include <types.h>
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>


int main() 
{
	int num;

	std::cin >> num;

	int result = multiply_numbers(num);

	std::cout << "The multiplied product is " << result;

	int num1 = 4;

	result = multiply_numbers(num1);

	std::cout << "\n\nThe multiplied product is " << result;

	return 0;
}

