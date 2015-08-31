#include <iostream>
#include <cstring>
#include <cstdio>

int main()
{
	char str[256];
	std::cout << "Input a string of hyphen separated words:" << std::endl;
	if(!fgets(str, sizeof(str), stdin))
		return 1;
	int len = strlen(str);
	if(len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
	char *front = str, *end = str;
	while(*end)
	{
		while(*end && *end != '-')
			end++;
		if(!*end)
			break;
		*end = '\0';
		printf("[%d] %s\n", (int) (end - front), front);
		end++;
		//std::cout << '\t' << end - front << std::endl;
		front = end;
	}

	//std::cout << '\t' << end - front << std::endl;
	printf("[%d] %s\n", (int) (end - front), front);
}
