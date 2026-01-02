/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:29:52 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 11:37:58 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) {
	setType("Dog");
	std::cout << "===Dog default constructor called===" << std::endl;
}

Dog::Dog( const Dog& base ) : Animal(base) {
	std::cout << "===Dog copy constructor called===" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "===Dog destructor called===" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	setType(other.type);
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "woof, woof, woof, woof" << std::endl;
}
