#include <functional>
#include <iostream>
#include <string>

class A
{
	int c;

public:
	A(int c) : c(c) {}
	int some_func() { std::cout << "내부 데이터 : " << c << std::endl; }
};

int main()
{
	A a(5);
	std::function<int()> f1 = a.some_func;
}
