/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:21 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:31:22 by vitosant         ###    ########.fr      */
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
