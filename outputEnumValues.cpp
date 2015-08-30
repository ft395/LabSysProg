#include <iostream> 
enum {RED, YELLOW, AMBER = YELLOW, GREEN}; 

int main ()
{
  std::cout << RED << std::endl
            << YELLOW << std::endl
            << AMBER<< std::endl 
	    << GREEN<< std::endl; 
}
