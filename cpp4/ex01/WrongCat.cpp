/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:28:17 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:28:18 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) {
	setType("WrongCat");
	std::cout << "===WrongCat default constructor called===" << std::endl;
}

WrongCat::WrongCat( const WrongCat& base ) : WrongAnimal(base) {
	std::cout << "===WrongCat copy constructor called===" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "===WrongCat destructor called===" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
	setType(other.type);
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "woof, woof, woof, woof" << std::endl;
}
