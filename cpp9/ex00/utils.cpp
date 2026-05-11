/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:13:53 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/11 13:13:53 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <string>
#include <ctime>

bool	checkDate( const std::string& date, std::time_t& time )
{
	int		year, month, day;
	bool	leap_year;

	if (date.length() != 10) return (false);
	if (date.at(4) != '-' || date.at(7) != '-') return (false);
	for (int i = 0; i < 10; i++)
		if (i != 4 && i != 7 && !std::isdigit(date.at(i))) return (false);

	year = std::atoi(date.substr(0, 4).c_str());
	month = std::atoi(date.substr(5, 2).c_str());
	day = std::atoi(date.substr(8, 2).c_str());
	leap_year = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

	if (day > 31 || month > 12 || month < 1 || day < 1 || year == 0) return (false);
	if (month == 2 && day > 29) return (false);
	if (month == 2 && !leap_year && day == 29) return (false);

	if (month < 8 && month % 2 == 0 && day == 31) return (false);
	if (month >= 8 && month % 2 == 1 && day == 31) return (false);

	struct tm date_maker;

	std::memset(&date_maker, 0, sizeof(struct tm));
	date_maker.tm_year = year - 1900;
	date_maker.tm_mon  = month - 1;
	date_maker.tm_mday = day;
	time = std::mktime(&date_maker);

	return (true);
}

bool	checkValue( const std::string& value, long double& val, const bool& isLimited )
{
	unsigned long	start = 0;
	long double		dvalue;
	char			*end;
	int				dot_count = 0;

	if (value.empty() || value[0] == '.') return (false);
	if (value.at(0) == '+' || value.at(0) == '-') start++;
	for(unsigned long i = start; i < value.length(); i++)
	{

		if (!std::isdigit(value.at(i)))
		{
			dot_count++;
			if (value[i] != '.' || dot_count > 1) return (false);
		}
	}

	dvalue = std::strtod(value.c_str(), &end);
	if (*end != '\0') return (false);
	if (dvalue < 0 )
		throw std::runtime_error("Error: not a positive number.");
	if ((dvalue > 1000 && isLimited) || std::isinf(dvalue))
		throw std::runtime_error("Error: too large a number.");
	val = dvalue;
	return (true);
}
