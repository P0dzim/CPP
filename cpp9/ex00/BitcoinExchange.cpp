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
#include <fstream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& base ): _data(base.getData()) {}

BitcoinExchange&	BitcoinExchange::operator=( const BitcoinExchange& other )
{
	if (&other != this)
		_data = other._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void ) {}

void	BitcoinExchange::loadData( const std::string& data = "data.csv" )
{
	std::ifstream	file;
	std::string		line;
	long double		value;

	file.open(data.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: Coudn't open data.csv file.");
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Error: Invalid header at data.csv file.");
	while (std::getline(file, line))
	{
		std::string	date;
		std::string	str_value;

		if (line.length() < 12)
			throw std::runtime_error("Error: Invalid data line.");
		std::stringstream	ss(line);
		std::getline(ss, date, ',');
		std::getline(ss, str_value);

		if (!checkDate(date))
			throw std::runtime_error("Error: Invalid date format.");
		if (!checkValue(str_value, value))
			throw std::runtime_error("Error: Invalid value format.");

		std::pair<std::string, long double> pair(date, value);
		if (_data.insert(std::make_pair(date, value)).second == false)
			throw std::runtime_error("Error: Duplicate dates in data.csv file.");
	}
	file.close();
}

bool	checkDate( const std::string& date )
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
	return (true);
}

bool	checkValue( const std::string& value, long double& val )
{
	long double	dvalue;
	char		*end;
	int			dot_count = 0;

	if (value.empty() || value[0] == '.')	return (false);
	for(unsigned long i = 0; i < value.length(); i++)
	{

		if (!std::isdigit(value.at(i)))
		{
			if (value[i] != '.') return (false);
			dot_count++;
			if (dot_count > 1) return (false);
		}
	}

	dvalue = std::strtod(value.c_str(), &end);
	if (dvalue < 0 || dvalue > 1000 || *end != '\0') return (false);
	val = dvalue;
	return (true);
}
