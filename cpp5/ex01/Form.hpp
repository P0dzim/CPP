/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:16:04 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 10:31:24 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_toSign;
		const int			_toExec;
	public:
		Form( void );
		Form( const Form& base );
		Form( const std::string& name, const int& toSign, const int& toExec );
		~Form( void );
		Form& operator=( const Form& other );
		
		class GradeTooHighException: public std::exception {
			const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char*	what() const throw();
		};
		class InvalidOperation: public std::exception {
			const char*	what() const throw();
		};

		const std::string&	getName( void ) const;
		const int&			getSignGrade( void ) const;
		const int&			getExecGrade( void ) const;
		const bool&			getSigned( void ) const;
		void				beSigned( const Bureaucrat& bureau );

};

std::ostream&	operator<<( std::ostream& out, const Form& paper );
