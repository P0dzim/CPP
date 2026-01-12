/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:26:20 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:26:24 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat( void ) {
	setType("Cat");
	brain = new Brain();
	std::cout << "===Cat default constructor called===" << std::endl;
}

Cat::Cat( const Cat& base ) : Animal(base) {
	brain = new Brain(*getBrain());
	std::cout << "===Cat copy constructor called===" << std::endl;
}

Cat::~Cat( void ) {
	delete (brain);
	brain = NULL;
	std::cout << "===Cat destructor called===" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	setType(other.type);
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "meaw, meaw, meaw, meaw" << std::endl;
}

Brain* Cat::getBrain( void ) const {
	return(brain);
}
