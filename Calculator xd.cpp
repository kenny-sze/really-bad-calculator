// Calculator xd.cpp : Defines the entry point for the console application.
//

#include "iostream" // allows use of user input and output
#undef max

namespace std {};


int main()
{
	// declare data type

	char op; // char data type for word operator CUZ OPERATOR IS A BAD WORD TO USE ON VS

	// float defines numeric values including decimals 
	float number1; 
	float number2; 

	std::cout << "Enter operator either + or - or * or /:  "; // select type of operation user input
	std::cin >> op; // read operator selected

	std::cout << "Two numbers :  "; // user input
	std::cin >> number1 >> number2; // read two integers

	switch (op)
	{

	case '+': // addition
			std::cout << number1 + number2;
			break;
	case '-': // subtraction
		std::cout << number1 - number2;
		break;

	case '*': // multiplication
		std::cout << number1 * number2; 
		break;

	case '/': //division
		std::cout << number1 / number2;
		break;

	default: // if the otherator is other than +, -, * or /, error message is shown
		std::cout << "error! operator is not correct make sure you correctly used one of the following operators as shown";
			break;
	}

	std::cout << std::endl; // adds a space so it doesn't look crammed with press any key to continue :eyes:

	system("pause");

	return 0;
}
//end of main function
