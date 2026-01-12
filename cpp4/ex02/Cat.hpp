/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:29:35 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:29:38 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal {
	private:
		Brain *brain;
	public:
		Cat( void );
		Cat( const Cat& base );
		Cat& operator=( const Cat& base );
		virtual ~Cat( void );

		Brain* getBrain( void ) const;

		void	makeSound( void ) const;
};
