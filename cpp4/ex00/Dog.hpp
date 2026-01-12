/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:22:52 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:23:11 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <string>

class Dog : public Animal {
	public:
		Dog( void );
		Dog( const Dog& base );
		Dog& operator=( const Dog& base );
		virtual ~Dog( void );

		void	makeSound( void ) const;
};
