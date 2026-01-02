/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:40:44 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 11:37:51 by vitor            ###   ########.fr       */
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
