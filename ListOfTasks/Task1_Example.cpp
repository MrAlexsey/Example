#include <iostream>
#include <conio.h>

double division(int a, int b) {
	if (b == 0) {
		throw "Division by zero condition!";
	}
	return (a / b);
}

double calculation() {

	double firstNumber, secondNumber;
	char operation;

	std::cout << "Write down first number:" << std::endl;
	std::cin >> firstNumber;

	std::cout << "Write down second number:" << std::endl;
	std::cin >> secondNumber;

	std::cout << "Write down operation (one of +, -, *, /) :" << std::endl;
	std::cin >> operation;

	std::cout << "Your answer is: ";
	switch (operation)
	{
	case '+':
		return firstNumber + secondNumber;
	case '-':
		return firstNumber - secondNumber;
	case '*':
		return firstNumber * secondNumber;
	case '/':
		try {
			if (secondNumber == 0)	throw std::overflow_error("Divide by zero exception");
			return firstNumber / secondNumber;
		}	
		catch (std::overflow_error e) {
			std::cout << e.what() << " -> ";
		}
	}
}

int main() {
	std::cout << calculation() << std::endl;
	_getch();
}