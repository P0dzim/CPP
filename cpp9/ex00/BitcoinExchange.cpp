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
#include <ctime>
#include <exception>
#include <fstream>
#include <iostream>
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

		if (!checkDate(date, time) || !checkValue(str_value, value, false))
			throw std::runtime_error("Error: bad input =>" + line);

		if (_data.insert(std::make_pair(time, value)).second == false)
			throw std::runtime_error("Error: Duplicate dates in data.csv file.");
	}
	file.close();
	if (_data.empty())
    	throw std::runtime_error("Error: database is empty.");
}

void	BitcoinExchange::readInput( const char *inputFile ) const
{
	std::string		line;
	std::ifstream	file(inputFile);

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}

	getline(file, line);
	if (line != "date | value")
	{
		std::cerr << "Error: Invalid header at " << inputFile << " file." << std::endl;
		return ;
	}

	while (!file.eof())
	{
		getline(file, line);
		if (line.empty() || line == "\n") continue ;

		try
		{
			findData(line);
		}
		catch( std::exception& e )
		{
			std::cout << e.what() << std::endl;
		}
	}
}

void	BitcoinExchange::findData( const std::string& line ) const
{
	std::time_t		time;
	long double		value;

	std::string	date;
	std::string	str_value;

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
		iter--;
	else if (iter->first != time && iter != _data.begin() && iter->first > time)
		iter--;
	if (time < iter->first)
		std::cout << "Error: No prior date in database => " + date << std::endl;
	else
		std::cout << date << " => " << value << " = " << (value * iter->second) << std::endl;
}

const std::map<std::time_t, long double>& BitcoinExchange::getData( void ) const
{
	return (_data);
}
