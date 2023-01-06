#include <iostream>

int main() {
	int	a = 5;
	int *ptr;
	*ptr = a;
	std::cout << *ptr << std::endl;

  delete ptr; // trying to free local variable
  return 0;
}