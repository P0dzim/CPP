/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:10:11 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 14:36:54 by vitor            ###   ########.fr       */
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

		virtual void	makeSound( void ) const = 0;
};
