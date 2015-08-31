#include <iostream>
#include <string>

int main()
{
	std::cout << "Please input two operands: ";
	float n1, n2;
	std::cin >> n1 >> n2;
	std::cout << std::endl << "Please input an operator: ";
	char op;
	std::cin >> op;
	// std::cout << std::endl;
	switch(op)
	{
		case '+':
			std::cout << "Adding " << n1 << " and " << n2 << " = " << n1 + n2 << std::endl;
			break;
		case '-':
			std::cout << "Subtracting " << n1 << " from " << n2 << " = " << n1 - n2 << std::endl;
			break;
		case '*':
			std::cout << "Multiplying " << n1 << " and " << n2 << " = " << n1 * n2 << std::endl;
			break;
		case '/':
			std::cout << "Dividing " << n1 << " with " << n2 << " = " << n1 / n2 << std::endl;
			break;
		//case '%':
		//	std::cout << "modulus" << n1 << " by " << n2 << " = " << n1 % n2 << std::endl;
		//	break;
		default:
			std::cout << "Cannot understand the operator" << std::endl;
	}
}
