#include <iostream>

int	main(){
	int	a;
	int& ref = a;

	std::cin >> a;
	std::cout << "\n";
	std::cout << ref << std::endl;
}