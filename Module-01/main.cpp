// main.cpp
// compile and execute program with the
// following command-line scripts:
// $ g++ main.cpp addition.cpp division.cpp print_result.cpp -o calculator
// $ ./calculator

#include <iostream>
#include "addition.h"
#include "division.h"
#include "print_result.h"

int main() {

	float first_no, second_no; 
	float result_add, result_div;

	std::cout << "Enter first number\t";
	std::cin >> first_no;
	std::cout << "Enter second number\t";
	std::cin >> second_no;

	result_add = addition(first_no, second_no);
	result_div = division(first_no, second_no);

	print_result("Addition: ", result_add);
	print_result("Division: ", result_div);

	return 0;
}
