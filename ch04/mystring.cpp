#include <iostream>

class mystring {
	int	len;
	char	*str;

	public:
	mystring(char c);
	mystring(const char *s);

	int		get_len();
	char	*get_str();
	void	strjoin(const mystring& s2);
	char	*contained_str(const mystring& s2); // 포함된 문자열 구하기
	bool	is_same(const mystring& s2);
	int		strcmp(const mystring& s2);
};

mystring::mystring(char c)
{
	str = new char[2];
	str[0] = c;
	len = 1;
}

mystring::mystring(const char *s)
{
	int	i=0;
	while(s[i])
		i++;
	str = new char[i + 1];
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	len = i;
}

int	mystring::get_len() {return len;}
char	*mystring::get_str() {return str;}

void	mystring::strjoin(const mystring& s2)
{
	int	i,j = 0;
	char	*new_str = new char[len + s2.len + 1];
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	while (s2.str[j])
		new_str[i++] = s2.str[j++];
	delete[] str;
	str = new_str;
	len += s2.len;
}

char	*mystring::contained_str(const mystring& s2) // ???
{
	return NULL;
}

bool	mystring::is_same(const mystring& s2)
{
	int	i;
	while (str[i] && s2.str[i])
	{
		if (str[i] != s2.str[i])
			break ;
		i++;
	}
	if (str[i] || s2.str[i])
		return false;
	return true;
}

int	mystring::strcmp(const mystring& s2)
{
	int	i;
	while (str[i] && s2.str[i])
	{
		if (str[i] != s2.str[i])
			break ;
		i++;
	}
	return (str[i] - s2.str[i]);
}

int	main() {
	mystring	s1("hello");
	mystring	s2(",world!");

	std::cout << s1.get_str() << std::endl;
	std::cout << s2.get_str() << std::endl;
	s1.strjoin(s2);
	std::cout << s1.get_str() << std::endl;
	return 0;
}