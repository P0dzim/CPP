/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:40:44 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 13:53:57 by vitor            ###   ########.fr       */
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