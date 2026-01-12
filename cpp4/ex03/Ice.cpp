/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:48 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:31:49 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice( void ): AMateria("ice") {}

Ice::Ice( const Ice& base ): AMateria(base) {}

Ice& Ice::operator=( const Ice& other ) {
	(void) other;
	return (*this);
}

Ice::~Ice( void ) {}

AMateria* Ice::clone( void ) const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter& target ) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
