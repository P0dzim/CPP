/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:31:10 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 13:55:24 by vitor            ###   ########.fr       */
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
