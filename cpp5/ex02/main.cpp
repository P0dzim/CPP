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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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
	std::cout << std::endl;
	std::cout << "=======================================" << std::endl
			<< "         ShrubberyCreationForm         " << std::endl
			<< "=======================================" << std::endl;
	{
		ShrubberyCreationForm	form("AOBA");
		ShrubberyCreationForm	form2;
		form.beSigned(_main);
		form.execute(__main);
		form.execute(_main);
		form2.beSigned(_main);
		form2.execute(__main);
		form2.execute(_main);
	}

	std::cout << std::endl;
	std::cout << "=======================================" << std::endl
			<< "          RobotomyRequestForm          " << std::endl
			<< "=======================================" << std::endl;
	{
		std::srand(std::time(NULL));
		RobotomyRequestForm	form("R2D2");
		RobotomyRequestForm	form2;
		form.beSigned(_main);
		form.execute(__main);
		form.execute(_main);
		form2.beSigned(_main);
		form2.execute(__main);
		form2.execute(_main);
	}
	return (0);
}
