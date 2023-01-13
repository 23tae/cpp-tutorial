#include <iostream>

// string.h 는 strlen 때문에 include 했는데, 사실 여러분이 직접 strlen
// 과 같은 함수를 만들어서 써도 됩니다.
#include <string.h>

class MyString
{
	char *string_content; // 문자열 데이터를 가리키는 포인터
	int string_length;	  // 문자열 길이
	int memory_capacity;  // 현재 할당된 용량

public:
	// 문자열로 부터 생성
	MyString(const char *str);

	// 복사 생성자
	MyString(const MyString &str);
    explicit MyString(int capacity);
	~MyString();
    void DoSomethingWithString(MyString s);
    int get_capacity();
};

MyString::MyString(const char *str)
{
	string_length = strlen(str);
	memory_capacity = string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++)
	{
		string_content[i] = str[i];
	}
}

MyString::MyString(const MyString &str)
{
	string_length = str.string_length;
	memory_capacity = str.string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++)
	{
		string_content[i] = str.string_content[i];
	}
}

MyString::MyString(int capacity)
{
    string_content = new char[capacity];
    string_length = 0;
    memory_capacity = capacity;
    std::cout << "Capacity : " << capacity << std::endl;
}

MyString::~MyString() { delete[] string_content; }

int MyString::get_capacity()
{
    return memory_capacity;
}


void DoSomethingWithString(MyString s)
{
    std::cout << s.get_capacity() << std::endl;
}


int main()
{
    // MyString s = 5; // 에러 발생1
    // DoSomethingWithString(3); // 에러 발생2
}
