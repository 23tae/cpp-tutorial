#include <iostream>

int factorial(int N)
{
	int total = 1;
	for (int i = 1; i <= N; i++)
	{
		total *= i;
	}
	return total;
}

template <int N>
struct A
{
	int operator()() { return N; }
};

int main() { A<factorial(5)> a; } //에러 발생
