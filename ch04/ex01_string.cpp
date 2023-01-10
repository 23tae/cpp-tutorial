#include <iostream>

class string
{
    char *str;
    int len;

public:
    string(char c, int n); // 문자 c 가 n 개 있는 문자열로 정의
    string(const char *s);
    string(const string &s);
    ~string();

    void add_string(const string &s);  // str 뒤에 s 를 붙인다.
    void copy_string(const string &s); // str 에 s 를 복사한다.
    int strlen();                      // 문자열 길이 리턴
    void print_string();
};
string::string(char c, int n)
{
    str = new char[n + 1];
    int i;
    for (i = 0; i<n; i++)
    {
        str[i] = c;
    }
    str[i] = '\0';
    len = n;
}
string::string(const char *s)
{
    for (len = 0; s[len] != '\0'; ++len)
        ;
    str = new char[len + 1];
    for (int i = 0; i <= len; ++i)
        str[i] = s[i];
}
string::string(const string &s)
{
    str = new char[s.len + 1];
    for(int i=0; i<= s.len + 1; i++)
        str[i] = s.str[i];
    len = s.len;
}
string::~string()
{
    if (str)
        delete str;
}

void string::add_string(const string &s)
{
    char *new_str;
    int i,j;

    new_str = new char[len + s.len + 1];
    for(i=0;i<len;i++)
        new_str[i] = str[i];
    delete str;
    for (j=0;j<=s.len;j++)
        new_str[i++] = s.str[j];
    str = new_str;
    len += s.len;
}
void string::copy_string(const string &s)
{
    char *new_str;

    delete str;
    new_str = new char[s.len + 1];
    for (int i=0; i<= s.len; i++)
        new_str[i] = s.str[i];
    str = new_str;
    len = s.len;
}
int string::strlen()
{
    return len;
}

void string::print_string()
{
    std::cout << str << std::endl;
}

int main(void)
{
    string str1("hello");
    string str2(str1);
    string str3(",world!");
    str1.add_string(str3);
    // str1.copy_string(str3);
    str1.print_string();
    str2.print_string();
}