#include "date.h"
#include <iostream>


void Date::set(int _day, int _month, int _year)
{
	this->day = _day;
	this->month = _month;
	this->year = _year;
}

void Date::print()
{
	std::cout << "Today is: " << day << "/" << month << "/" << year;
}

