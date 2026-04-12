/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 11:26:57 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 11:26:58 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ):AForm("", 145, 137),  _target("_shrubbery"){}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ): AForm(target, 145, 137), _target(target + "_shrubbery") {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& base ): AForm(base), _target(base._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other )
{
	try
	{
		AForm::operator=(other);
		_target = other._target;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::ofstream file;

	try
	{
		executor.executeForm(*this);
		file.open(_target.c_str());
		if (file.is_open() == false)
			throw FileErr();
		file << "     *     " << std::endl
			<< "    ***    " << std::endl
			<< "   *****   " << std::endl
			<< "  *******  " << std::endl
			<< " ********* " << std::endl
			<< "***********" << std::endl
			<< "    ###    " << std::endl
			<< "    ###    " << std::endl;
		file.close();
	}
	catch( std::exception& e)
	{
		std::string err(e.what());

		if (err == "Can't execute form.")
			std::cout << executor.getName() << ": " << e.what() << std::endl;
		else
			std::cout << e.what() << std::endl;
	}
}

const char* ShrubberyCreationForm::FileErr::what() const throw()
{
	return ("Can't open file.");
}