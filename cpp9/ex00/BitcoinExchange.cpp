/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:51:13 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 17:04:37 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <algorithm>

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& base ): _data(base.getData()) {}

BitcoinExchange&	BitcoinExchange::operator=( const BitcoinExchange& other )
{
	if (&other != this)
		_data = other._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void ) {}

void	BitcoinExchange::loadData( const std::string& data )
{
	std::ifstream	file;
	std::string		line;
	std::time_t		time;
	long double		value;

	file.open(data.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: Coudn't open data.csv file.");
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Error: Invalid header at data.csv file.");
	while (!file.eof())
	{
		std::string	date;
		std::string	str_value;

		std::getline(file, line);
		if (line == "\n" || line == "") continue ;
		if (line.length() < 12)
			throw std::runtime_error("Error: bad input =>" + line);
		std::stringstream	ss(line);
		std::getline(ss, date, ',');
		std::getline(ss, str_value);

		if (!checkDate(date, time) || !checkValue(str_value, value, true))
			throw std::runtime_error("Error: bad input =>" + line);

		std::pair<std::string, long double> pair(date, value);
		if (_data.insert(std::make_pair(time, value)).second == false)
			throw std::runtime_error("Error: Duplicate dates in data.csv file.");
	}
	file.close();
}

bool	checkDate( const std::string& date, std::time_t& time )
{
	int		year, month, day;
	bool	leap_year;

	if (date.length() < 10) return (false);
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

bool	checkValue( const std::string& value, long double& val, const bool& isData)
{
	long double	dvalue;
	char		*end;
	int			dot_count = 0;

	if (value.empty() || value[0] == '.') return (false);
	for(unsigned long i = 0; i < value.length(); i++)
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
	if (dvalue > 1000 && !isData)
		throw std::runtime_error("Error: too large a number.");
	val = dvalue;
	return (true);
}

void	BitcoinExchange::findData( const std::string& input )
{
	std::ifstream	file;
	std::string		line;
	std::time_t		time;
	long double		value;

	file.open(input.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: Coudn't open " + input + " file.");
	std::getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("Error: Invalid header at " + input + " file.");
	while (!file.eof())
	{
		std::string	date;
		std::string	str_value;

		std::getline(file, line);
		if (line == "\n" || line == "") continue ;
		if (line.length() < 14)
			throw std::runtime_error("Error: bad input =>" + line);
		std::stringstream	ss(line);
		std::getline(ss, date, '|');
		std::getline(ss, str_value);

		if (!date.empty()) date.erase(date.size() - 1);
		if (!str_value.empty()) str_value.erase(0, 1);

		if (!checkDate(date, time) || !checkValue(str_value, value, true))
			throw std::runtime_error("Error: bad input =>" + line);

		std::map<std::time_t, long double>::const_iterator iter = _data.lower_bound(time);
		if (iter == _data.end())
	}
	file.close();
}

const std::map<std::time_t, long double>& BitcoinExchange::getData( void ) const
{
	return (_data);
}
