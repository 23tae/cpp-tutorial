#include <iostream>

template <typename T>
void Swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int c = 2, d = 3;

    std::cout << "c : " << c << ", d : " << d << std::endl;
    Swap(c, d);
    std::cout << "c : " << c << ", d : " << d << std::endl;
    std::string e = "hello", f = "world";
    std::cout << "e : " << e << ", f : " << f << std::endl;
    Swap(e, f);
    std::cout << "e : " << e << ", f : " << f << std::endl;
    return 0;
}
