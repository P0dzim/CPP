/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:11:48 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 13:51:55 by vitor            ###   ########.fr       */
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
