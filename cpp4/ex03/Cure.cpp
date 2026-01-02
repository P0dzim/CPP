/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:38:00 by vitor             #+#    #+#             */
/*   Updated: 2026/01/02 18:05:59 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( void ): AMateria("cure") {}

Cure::Cure( const Cure& base ): AMateria(base) {}

Cure& Cure::operator=( const Cure& other ) {
	(void)other;
	return (*this);
}

Cure::~Cure( void ) {}

AMateria* Cure::clone( void ) const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter& target ) {
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}
