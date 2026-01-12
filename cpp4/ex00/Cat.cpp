/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:19:54 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:22:18 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) {
	setType("Cat");
	std::cout << "===Cat default constructor called===" << std::endl;
}

Cat::Cat( const Cat& base ) : Animal(base) {
	std::cout << "===Cat copy constructor called===" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "===Cat destructor called===" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	setType(other.type);
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "meaw, meaw, meaw, meaw" << std::endl;
}
