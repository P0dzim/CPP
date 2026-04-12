/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:51:26 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/11 20:05:27 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	Bureaucrat _main("Zacarias", 1);
	Bureaucrat __main("Roberto", 150);

	try
	{
		Bureaucrat down("Tijolinho", 151);
	}
	catch ( std::exception& e)
	{
		std::cout << "Tijolinho: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat upper("Zeus", 0);
	}
	catch ( std::exception& e)
	{
		std::cout << "Zeus: " << e.what() << std::endl;
	}
	try
	{
		_main.upGrade();
	}
	catch( std::exception& e )
	{
		std::cout << "Zacarias: " << e.what() << std::endl;
	}
	try
	{
		_main.downGrade();
		std::cout << _main.getName() << ": downgrade" << std::endl;
	}
	catch( std::exception& e )
	{
		std::cout << "Zacarias: " << e.what() << std::endl;
	}
	try 
	{
		__main.downGrade();
	}
	catch ( std::exception& e )
	{
		std::cout << "Roberto: " << e.what() << std::endl;
	}
	try 
	{
		__main.upGrade();
		std::cout << __main.getName() << ": upgrade" << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cout << "Roberto: " << e.what() << std::endl;
	}

	Form form("GFORM", 10, 10);
	Form form3("GFORM2", 140, 140);
	try
	{
		Form form2("aiaiai", 200, 200);
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	_main.signForm(form);
	__main.signForm(form);
	__main.signForm(form3);
	std::cout << _main << std::endl;
	std::cout << __main << std::endl;
	return (0);
}
