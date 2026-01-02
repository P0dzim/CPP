/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:41:44 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 19:34:28 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice( void ): AMateria("ice") {}

Ice::Ice( const Ice& base ): AMateria(base) {}

Ice& Ice::operator=( const Ice& other ) {
	return (*this);
}

Ice::~Ice( void ) {}

AMateria* Ice::clone( void ) const {
	return (new Ice);
}

void	Ice::use( ICharacter& target ) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
