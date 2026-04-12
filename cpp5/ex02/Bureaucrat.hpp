/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:52:24 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/11 20:12:09 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string& name, const int& grade );
		Bureaucrat( const Bureaucrat& base );
		~Bureaucrat( void );
		Bureaucrat& operator=( const Bureaucrat& other );

		const std::string&	getName( void ) const;
		const int&			getGrade( void ) const;
		void				upGrade( void );
		void				downGrade( void );
		void				signForm( AForm& form ) const;
		
		class GradeTooHighException: public std::exception {
			const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char*	what() const throw();
		};
		class InvalidOperation: public std::exception {
			const char*	what() const throw();
		};
		class ExecutionErr: public std::exception {
			const char*	what() const throw();
		};
		class SignErr: public std::exception {
			const char*	what() const throw();
		};

		void				executeForm(AForm const & form) const;
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& affs );
