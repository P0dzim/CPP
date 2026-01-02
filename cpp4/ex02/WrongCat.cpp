/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:33:42 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 11:49:14 by vitor            ###   ########.fr       */
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
