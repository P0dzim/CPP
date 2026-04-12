/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 13:51:18 by vitosant          #+#    #+#             */
/*   Updated: 2026/04/12 13:51:22 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( const std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& base );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& other );

		void	execute( Bureaucrat const & executor ) const;
};