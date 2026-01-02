/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:24:19 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 13:15:28 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) {
	std::cout << "===Animal default constructor called===" << std::endl;
}

Animal::Animal( const Animal& base ) : type(base.type) {
	std::cout << "===Animal copy constructor called===" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "===Animal destructor called===" << std::endl;
}

Animal& Animal::operator=( const Animal& other ) {
	type = other.type;
	return (*this);
}

std::string Animal::getType( void ) const {
	return (type);
}

void	Animal::setType( const std::string& type ) {
	this->type = type;
}

void	Animal::makeSound( void ) const {
	std::cout << "no sound" << std::endl;
}
