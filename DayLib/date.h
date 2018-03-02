#pragma once
#include <string>
namespace datetools
{
	namespace details
	{
		constexpr unsigned int days_to_month[2][12] =
		{
			// non-leap year
			{ 0,31,59,90,120,151,181,212,243,273,304,334 },

			// leap year
			{ 0,31,60,91,121,152,182,213,244,274,305,335 },
		};
	}

	constexpr bool is_leap(int const year) noexcept
	{
		return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
	}

	constexpr unsigned int day_of_year(int const year, unsigned int const month, unsigned int const day)
	{
		if (year <= 0) throw std::out_of_range("invalid year");
		if (month == 0 || month > 12) throw std::out_of_range("invalid month");
		if (day == 0 || day > 31) throw std::out_of_range("invalid day");

		return details::days_to_month[is_leap(year)][month - 1] + day;
	}

}

