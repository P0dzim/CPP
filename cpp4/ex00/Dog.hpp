/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:31:10 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 11:38:03 by vitor            ###   ########.fr       */
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
