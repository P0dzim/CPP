/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:27:13 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:28:00 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) {
	std::cout << "===WrongAnimal default constructor called===" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& base ) : type(base.type) {
	std::cout << "===WrongAnimal copy constructor called===" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "===WrongAnimal destructor called===" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	type = other.type;
	return (*this);
}

std::string WrongAnimal::getType( void ) const {
	return (type);
}

void	WrongAnimal::setType( const std::string& type ) {
	this->type = type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "no sound" << std::endl;
}
