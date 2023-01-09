#include <iostream>

class Date {
	int year_;
	int month_;  // 1 부터 12 까지.
	int day_;    // 1 부터 31 까지.

	public:
		void ShowDate();
		Date(int year, int month, int date); // way to define constructor outside the class
		Date();
};

Date::Date(int year, int month, int date) {
	year_ = year;
	month_ = month;
	day_ = date;
}

Date::Date() {
	year_ = 2023;
	month_ = 1;
	day_ = 9;
}

void Date::ShowDate() {
	std::cout << year_ << "/" << month_ << "/" << day_ << std::endl;
}

int	main() {
	Date date1(2016, 11, 17);
	Date date2;

	date1.ShowDate();
	date2.ShowDate();
	return 0;
}