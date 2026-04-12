/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:16:00 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 10:31:38 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ): _name(""), _signed(false), _toSign(150), _toExec(150) {}

Form::~Form( void ) {}

Form::Form( const std::string& name, const int& toSign, const int& toExec ): _name(name), _signed(false),
																			_toSign(toSign), _toExec(toExec)
{
		if (toSign > 150 || toExec > 150)
			throw GradeTooLowException();
		if (toSign < 1 || toExec < 1)
			throw GradeTooHighException();
}

Form::Form( const Form& base ): _name(base._name), _signed(base._signed),
								_toSign(base._toSign), _toExec(base._toExec){}

Form&	Form::operator=( const Form& other )
{
	(void) other;
	throw InvalidOperation();
	return (*this);
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade is lower than the range.");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is higher than the range.");
}

const char* Form::InvalidOperation::what() const throw()
{
	return ("Invalid operation.");
}

const std::string&	Form::getName( void ) const
{
	return (_name);
}

const int&	Form::getExecGrade( void ) const
{
	return (_toExec);
}

const int&	Form::getSignGrade( void ) const
{
	return (_toSign);
}

const bool&	Form::getSigned( void ) const
{
	return (_signed);
}


std::ostream&	operator<<( std::ostream& out, const Form& paper ) {
	out << "=============FORM==============" << std::endl
		<< paper.getName() << std::endl
		<< "===============================" << std::endl
		<< "Minimum grade to sign is: " << paper.getSignGrade() << std::endl
		<< "Minimum grade to exec is: " << paper.getExecGrade() << std::endl
		<< "The form is signed: " << paper.getSigned() << std::endl;
    return (out);
}

void	Form::beSigned( const Bureaucrat& bureau )
{
	if (bureau.getGrade() > _toSign)
		throw GradeTooLowException();
	_signed = true;
}
