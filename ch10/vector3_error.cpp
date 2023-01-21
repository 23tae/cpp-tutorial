#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T> &vec)
{
	// 전체 벡터를 출력하기
	std::cout << "[ ";
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end();
		 ++itr)
	{
		std::cout << *itr << " ";
	}
	std::cout << "]";
}
int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(20);

	std::cout << "처음 벡터 상태" << std::endl;
	print_vector(vec);

	std::vector<int>::iterator itr = vec.begin();
	std::vector<int>::iterator end_itr = vec.end();

	for (; itr != end_itr; ++itr)
	{
		if (*itr == 20)
		{
			vec.erase(itr);
		}
	}

	std::cout << "값이 20 인 원소를 지운다!" << std::endl;
	print_vector(vec);
}
