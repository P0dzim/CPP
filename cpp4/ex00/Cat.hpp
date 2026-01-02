/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:11:48 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 11:37:55 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"
#include <string>

class Cat : public Animal {
	public:
		Cat( void );
		Cat( const Cat& base );
		Cat& operator=( const Cat& base );
		virtual ~Cat( void );

		void	makeSound( void ) const;
};
