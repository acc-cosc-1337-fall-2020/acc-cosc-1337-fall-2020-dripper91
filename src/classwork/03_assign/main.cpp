//Write the include statement for decisions.h here
#include <decision.h>
//Write namespace using statements for cout and cin
#include <iostream>

int main() 
{
	int gradeNum;

	std::cout << "Enter the number grade: ";  

	std::cin >> gradeNum;

	std::cout << "\nLetter grade using if/else is: " << get_letter_grade_using_if(gradeNum);

	std::cout << "\nLetter grade using switch is: " << get_letter_grade_using_switch(gradeNum);

	return 0;
}

