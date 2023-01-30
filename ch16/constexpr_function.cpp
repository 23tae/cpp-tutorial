#include <iostream>

template <int N>
struct Factorial
{
	static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0>
{
	static const int value = 1;
};

template <int N>
struct A
{
	int operator()() { return N; }
};

int main()
{
	// 컴파일 타임에 값이 결정되므로 템플릿 인자로 사용 가능!
	A<Factorial<10>::value> a;

	std::cout << a() << std::endl;
}
