#include <iostream>

int main()
{
  int num = 5;
  int *ptr = &num;
  int &ref = num;
  const int numConst = 10;

  (*ptr)++;
  ref++;
  std::cout << num << std::endl;


  std::cout << 0xf3f2 << std::endl
            << 0437 << std::endl
	    << (int)'a' << std::endl;
}
