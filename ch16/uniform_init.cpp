#include <iostream>

class A
{
public:
	A() { std::cout << "A 의 생성자 호출!" << std::endl; }
};

int main()
{
	A a{}; // 균일한 초기화!
}
