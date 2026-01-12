/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:29:52 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:29:53 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {
	private:
		Brain *brain;
	public:
		Dog( void );
		Dog( const Dog& base );
		Dog& operator=( const Dog& base );
		virtual ~Dog( void );

		Brain* getBrain( void ) const;

		void	makeSound( void ) const;
};
