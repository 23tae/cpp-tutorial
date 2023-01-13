#include <iostream>

class A
{
    mutable int data_;

public:
    A(int data) : data_(data) {}
    void DoSomething(int x) const
    {
        data_ = x; // 변수를 mutable로 선언하여 에러 방지
    }

    void PrintData() const { std::cout << "data: " << data_ << std::endl; }
};

int main()
{
    A a(10);
    a.DoSomething(3);
    a.PrintData();
}