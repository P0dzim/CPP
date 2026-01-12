/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:29:44 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:29:46 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) {
	setType("Dog");
	brain = new Brain();
	std::cout << "===Dog default constructor called===" << std::endl;
}

Dog::Dog( const Dog& base ) : Animal(base) {
	brain = new Brain(*getBrain());
	std::cout << "===Dog copy constructor called===" << std::endl;
}

Dog::~Dog( void ) {
	delete (brain);
	std::cout << "===Dog destructor called===" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	setType(other.type);
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "woof, woof, woof, woof" << std::endl;
}

Brain* Dog::getBrain( void ) const {
	return (brain);
}
