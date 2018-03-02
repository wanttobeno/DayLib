/*
		Computing day of year in C++
http://mariusbancila.ro/blog/2017/08/03/computing-day-of-year-in-c/

*/
#include "date.h"

int main(int agrc, char** agrv)
{
	auto day1 = datetools::day_of_year(2018, 1, 1);
	auto day2 = datetools::day_of_year(2018, 8, 3);
	auto day3 = datetools::day_of_year(2018, 12, 31);
	auto day4 = datetools::day_of_year(2020, 12, 31);
	return 0;
}

