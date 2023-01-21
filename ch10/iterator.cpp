// 반복자 사용 예시
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	// 전체 벡터를 출력하기
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
	{
		std::cout << *itr << std::endl;
	}

	// int arr[4] = {10, 20, 30, 40}
	// *(arr + 2) == arr[2] == 30;
	// *(itr + 2) == vec[2] == 30;

	std::vector<int>::iterator itr = vec.begin() + 2;
	std::cout << "3 번째 원소 :: " << *itr << std::endl;
}
