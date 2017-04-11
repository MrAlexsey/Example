#include <iostream>
#include <conio.h>

void calculation() {

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
		std::cout << firstNumber + secondNumber;
	case '-':
		std::cout << firstNumber - secondNumber;
	case '*':
		std::cout << firstNumber * secondNumber;
	case '/':
		if (secondNumber != 0) {
			std::cout << firstNumber / secondNumber;
		}
		else {
			std::cout << "WTF" << std::endl;
		}
	}
}

int main() {
	calculation();
	_getch();
}