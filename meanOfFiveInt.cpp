#include <iostream>
#include <string>


int main()
{
	std::cout << "Input five integers" << std::endl;
	int i1, i2, i3, i4, i5;
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5;
	std::cout << "The mean is " << (i1 + i2 + i3 + i4 + i5) / 5 << std::endl;
}
