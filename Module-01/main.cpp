// main.cpp
// compile and execute program with the
// following command-line scripts:
// $ g++ main.cpp -o calculator
// $ ./calculator

#include <iostream>

float addition(float num1, float num2);
float division(float num1, float num2);
void print_result(std::string result_type, float result_value);

int main() {

	float first_no, second_no; 
	float result_add, result_div;

	std::cout << "Enter first number\t";
	std::cin >> first_no;
	std::cout << "Enter second number\t";
	std::cin >> second_no;

	result_add = addition(first_no, second_no);
	result_div = division(first_no, second_no);

	/* std::cout << "Addition result:\t" << result_add 
		  << "\nDivision result:\t" << result_div 
		  << "\n";
	*/

	print_result("Addition: ", result_add);
	print_result("Division: ", result_div);

	return 0;
}

float addition(float num1, float num2) {
	return num1 + num2;	
}

float division(float num1, float num2) {
	return num1 / num2;
}

void print_result(std::string result_type, float result_value) {
	std::cout << result_type << " result:\t" 
		  << result_value << "\n";
}
