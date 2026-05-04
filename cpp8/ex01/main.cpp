/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:59:14 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 14:59:14 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>

int main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "========addRange=========" << std::endl;
		Span sp = Span(5);

		sp.addNumber(11);
		sp.addNumber(22);
		sp.addNumber(33);
		sp.addNumber(44);
		sp.addNumber(55);

		Span empty(10);
		empty.addNumberRange(sp.getVec().begin(), sp.getVec().end());
		std::cout << empty << std::endl;
	}
	{
		std::cout << "==========Erro===========" << std::endl;
		Span sp = Span(5);

		sp.addNumber(11);
		sp.addNumber(22);
		sp.addNumber(33);
		sp.addNumber(44);
		sp.addNumber(55);

		Span empty(2);
		try {
			empty.addNumberRange(sp.getVec().begin(), sp.getVec().end());
			std::cout << empty << std::endl;
		}
		catch( std::exception& e )
		{
			std::cout << "ERROR: not enough space" << std::endl;
		}
		try {
			empty.addNumber(42);
			empty.addNumber(42);
			empty.addNumber(42);
			std::cout << empty << std::endl;
		}
		catch( std::exception& e )
		{
			std::cout << "ERROR: not enough space" << std::endl;
		}
		empty = Span();
		try
		{
			std::cout << "SHORTEST: " <<  empty.shortestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << "ERROR: container is empty" << std::endl;
		}
		try
		{
			std::cout << "LONGEST: " <<  empty.longestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << "ERROR: container is empty" << std::endl;
		}
	}
	return (0);
}
