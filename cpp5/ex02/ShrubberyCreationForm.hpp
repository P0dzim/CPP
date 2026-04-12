/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 10:22:25 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 11:12:10 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm: public AForm {
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& base );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );

		class FileErr: public std::exception{
			const char*	what() const throw();
		};

		void	execute( Bureaucrat const & executor ) const;
};
