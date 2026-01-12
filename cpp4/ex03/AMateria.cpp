/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:30:52 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:30:54 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( void ) {}

AMateria::AMateria( std::string const & type ) {
	_type = type;
}

AMateria::AMateria (const AMateria& base) {
	_type = base.getType();
}

AMateria& AMateria:: operator=( const AMateria& other ) {
	_type = other.getType();
	return (*this);
}

AMateria::~AMateria( void ) {}

std::string const & AMateria::getType() const {
	return (_type);
}

void	AMateria::use( ICharacter& target ) {
	(void) target;
}
