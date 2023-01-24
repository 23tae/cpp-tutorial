#include <iostream>
#include <string>

int main()
{
	std::string str = R"(asdfasdf
이 안에는
어떤 것들이 와도
// 이런것도 되고
#define hasldfjalskdfj
\n\n <--- Escape 안해도 됨
)";

	std::cout << str;
}
