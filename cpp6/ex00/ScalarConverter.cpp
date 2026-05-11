/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:21:20 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 17:16:01 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cerrno>
#include <cmath>
#include <cstdlib>
#include <exception>
#include <iomanip>
#include <ios>
#include <iostream>

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( const ScalarConverter& base ) {
	(void) base;
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& other )
{
	(void) other;
	return (*this);
}

void	ScalarConverter::convert( std::string str )
{
	char	*end;
	double	num;

	if (str.length() == 1 && !std::isdigit(str.at(0)))
		num = static_cast<double>(str.at(0));
	else
	{
		try
		{
			num = std::strtod(str.c_str(), &end);
		}
		catch( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
		if ((*end != 'f' && *end != '\0') || (*end != '\0' && *(end + 1) != '\0'))
		{
			std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
			return ;
		}
	}
	printChar(num);
	printInt(num);
	printFloat(num);
	printDouble(num);
}

void	ScalarConverter::printChar( double& num )
{
	if (std::isnan(num) || std::isinf(num))
		std::cout << "char: impossible" << std::endl;
	else if (num < 32 || num > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;
}

void	ScalarConverter::printInt( double& num )
{
	if (std::isnan(num) || std::isinf(num) || num < -2147483648 ||num > 2147483647)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
}

void	ScalarConverter::printFloat( double& num )
{
	float value = static_cast<float>(num);

	std::cout << "float: " << std::fixed << std::setprecision(1) << value;
	if (std::isnan(value) || std::isinf(value))
		std::cout << std::endl;
	else
		std::cout << "f" << std::endl;
}

void	ScalarConverter::printDouble( double& num )
{
	std::cout << "double: " << std::fixed << std::setprecision(1)<< num << std::endl;
}
