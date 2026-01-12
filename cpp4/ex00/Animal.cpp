/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:18:32 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:19:33 by vitosant         ###    ########.fr      */
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
