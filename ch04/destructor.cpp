// 소멸자 호출 확인하기
#include <string.h>
#include <iostream>

class Test {
  char c;

 public:
  Test(char _c) {
    c = _c;
    std::cout << "생성자 호출 " << c << std::endl;
  }
  ~Test() { std::cout << "소멸자 호출 " << c << std::endl; }
};
void simple_function() { Test b('b'); } // b는 이 함수의 지역 객체이므로 함수가 종료될 때 소멸됨.
int main() {
  Test a('a');
  simple_function();
}
