/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:25:51 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:25:53 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( const Animal& base );
		Animal& operator=( const Animal& other );
		virtual ~Animal( void );

		std::string getType( void ) const;
		void		setType(const std::string& type );

		virtual void	makeSound( void ) const;
};
