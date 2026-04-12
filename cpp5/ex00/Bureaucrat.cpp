/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:19:22 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/11 17:04:53 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name(""), _grade(150) {}

Bureaucrat::Bureaucrat( const std::string& name, const int& grade ): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& base): _name(base.getName()), _grade(base.getGrade()){}


Bureaucrat::~Bureaucrat( void ){}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
	(void) other;
	throw InvalidOperation();
	return (*this);
}

const std::string& Bureaucrat::getName( void ) const {
	return (_name);
}

const int& Bureaucrat::getGrade( void ) const {
	return (_grade);
}

void Bureaucrat::upGrade( void ) {
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::downGrade( void ) {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Highest grade achieved.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Lowest grade achieved.");
}
const char* Bureaucrat::InvalidOperation::what() const throw() {
	return ("Invalid operation.");
}

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& affs ) {
	out << affs.getName() << ", bureaucrat grade " << affs.getGrade();
    return (out);
}
