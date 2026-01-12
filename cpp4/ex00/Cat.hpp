/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:22:31 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:22:34 by vitosant         ###    ########.fr      */
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
