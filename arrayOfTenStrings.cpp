#include <iostream>
#include <string>
#include <cstdlib>

typedef std::string TenStrArray[10]; 

int main()
{
	TenStrArray array;
	for (int i = 0; i < 10; i++)
	{
		array[i] = '1' + i;
		std::cout << array[i] << std::endl;
	}
}
