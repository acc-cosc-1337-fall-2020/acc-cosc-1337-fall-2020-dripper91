//write include statements
#include <variables.h>
#include <iostream>

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	std::cout << "Enter the meal amount: ";

	std::cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	std::cout << "Enter the tip rate: ";

	std::cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	std::cout << "\nMeal Amount: " << meal_amount;
	std::cout << "\nSales Tax: " << tax_amount;
	std::cout << "\nTip Amount: " << tip_amount;
	std::cout << "\nTotal: " << total;

	return 0;
}
