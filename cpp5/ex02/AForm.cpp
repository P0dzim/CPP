/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:16:00 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 11:12:47 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void ): _name(""), _signed(false), _toSign(150), _toExec(150) {}

AForm::~AForm( void ) {}

AForm::AForm( const std::string& name, const int& toSign, const int& toExec ): _name(name), _signed(false),
																			_toSign(toSign), _toExec(toExec)
{
		if (toSign > 150 || toExec > 150)
			throw GradeTooLowException();
		if (toSign < 1 || toExec < 1)
			throw GradeTooHighException();
}

AForm::AForm( const AForm& base ): _name(base._name), _signed(base._signed),
								_toSign(base._toSign), _toExec(base._toExec){}

AForm&	AForm::operator=( const AForm& other )
{
	(void) other;
	throw InvalidOperation();
	return (*this);
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("grade is lower than the range.");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("grade is higher than the range.");
}

const char* AForm::InvalidOperation::what() const throw()
{
	return ("Invalid operation.");
}

const std::string&	AForm::getName( void ) const
{
	return (_name);
}

const int&	AForm::getExecGrade( void ) const
{
	return (_toExec);
}

const int&	AForm::getSignGrade( void ) const
{
	return (_toSign);
}

const bool&	AForm::getSigned( void ) const
{
	return (_signed);
}


std::ostream&	operator<<( std::ostream& out, const AForm& paper ) {
	out << "=============FORM==============" << std::endl
		<< paper.getName() << std::endl
		<< "===============================" << std::endl
		<< "Minimum grade to sign is: " << paper.getSignGrade() << std::endl
		<< "Minimum grade to exec is: " << paper.getExecGrade() << std::endl
		<< "The form is signed: " << paper.getSigned() << std::endl;
    return (out);
}

void	AForm::beSigned( const Bureaucrat& bureau )
{
	if (bureau.getGrade() > _toSign)
		throw GradeTooLowException();
	_signed = true;
}
