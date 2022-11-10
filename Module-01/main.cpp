// main.cpp

#include <iostream>

int main() {

	float first_no, second_no; 
	float result_add, result_div;

	std::cout << "Enter first number\t";
	std::cin >> first_no;
	std::cout << "Enter second number\t";
	std::cin >> second_no;

	result_add = first_no + second_no;
	result_div = first_no / second_no;

	std::cout << "Addition result:\t" << result_add 
		  << "\nDivision result:\t" << result_div 
		  << "\n";

	return 0;
}
