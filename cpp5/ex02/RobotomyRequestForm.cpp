/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 13:59:14 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 13:59:15 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm( const std::string target ): AForm(target, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& base ): AForm(base), _target(base._target) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other )
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

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	int			coin;

	coin = std::rand();
	try
	{
		executor.executeForm(*this);

		std::cout << "Brrrrrrr! Brrrrrrr! Brrrrrrr!" << std::endl;
		if (coin % 2 == 0)
			std::cout << _target << " " << "has been robotomized successfully" << std::endl;
		else
			std::cout << _target << ": " << "the robotomy failed." << std::endl;
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