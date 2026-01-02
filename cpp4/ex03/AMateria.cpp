/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:30:48 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 17:39:51 by vitor            ###   ########.fr       */
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
