#include <iostream>

class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date)
  {
	  year_ = year;
	  month_ = month;
	  day_ = date;
  }
  void AddDay(int inc)
  {
	  int days;

	  while (inc)
	  {
		  days = days_in_month(); // 해당 달의 일수
		  if (day_ + inc > days)
		  {
			inc -= days - day_;
			AddMonth(1);
			day_ = 0;
		  }
		  else
		  {
			day_ += inc;
			return ;
		  }
	  }
  }
  void AddMonth(int inc)
  {
	  int tmp; // 증가된 월의 임시 변수

	  tmp = month_ + inc;
	  if (tmp % 12)
	  {
		  year_ += tmp / 12;
		  month_ = tmp % 12;
	  }
	  else // 변수가 12의 배수인 경우
	  {
		  year_ += tmp / 12 - 1;
		  month_ = 12;
	  }
  }
  void AddYear(int inc)
  {
	  year_ += inc;
  }

  void ShowDate()
  {
	  std::cout << year_ << "/" << month_ << "/" << day_ << std::endl;
  }
  int	days_in_month()
  {
	  if (month_ == 2)
	  {
		if (is_leap_year() == true)
		  	return 29;
		return 28;
	  }
	else if (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11)
		return 30;
	else
		return 31;
  }
  bool is_leap_year()
  {
	if (year_ % 4 == 0)
	{
		if (year_ % 100 == 0)
		{
			if (year_ % 400 == 0)
				return true;
			else
				return false;
		}
		return true;
	}
	return false;
  }
};

int	main() {
	Date date;

	date.SetDate(2020, 2, 27);
	date.AddDay(2);
	date.AddMonth(0);
	date.AddYear(0);

	date.ShowDate();
	return 0;
}