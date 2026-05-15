/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 08:37:05 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/15 08:37:05 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>

RPN::RPN( void ) {}

RPN::RPN( const RPN& base ) {
	(void) base;
}

RPN::~RPN( void ) {}

RPN& RPN::operator=( const RPN& other )
{
	(void) other;
	return (*this);
}

static long	operation(const char op, const long& num1, const long& num2)
{
	long ret = 0;

	switch (op)
	{
		case '+':
			ret = num1 + num2;
			break;
		case '-':
			ret = num1 - num2;
			break;
		case '/':
			if (num2 == 0)	throw std::runtime_error("Error: Division by zero.");
			ret = num1 / num2;
			break;
		case '*':
			ret = num1 * num2;
			break;
	}
	return (ret);
}

void	RPN::calculation( std::string input )
{
	std::stack<long>	_stack;
	std::size_t			i = 0;

	while (i < input.length())
	{
		if (std::isdigit(input[i]))
		{
			_stack.push(input[i] - '0');
			i++;
		}
		else if (std::strchr("+-/*", input[i]))
		{
			long	num1;
			long	num2;
			long	result;

			if (_stack.size() < 2) throw std::runtime_error("Error: Invalid sintaxe.");

			num2 = _stack.top();
			_stack.pop();
			num1 = _stack.top();
			_stack.pop();

			result = operation(input[i], num1, num2);
			_stack.push(result);
			i++;
		}
		else
			throw std::runtime_error("Error");
		if (input[i] != '\0' && input[i] != ' ')
			throw std::runtime_error("Error: Expected space between numbers and operators.");
		i++;
	}
	if (_stack.size() != 1)	throw std::runtime_error("Error: Missing operator in expression.");
	std::cout << _stack.top() << std::endl;
}
