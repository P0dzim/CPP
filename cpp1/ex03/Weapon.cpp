/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:02:59 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:03:00 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon( void ) {
	type = "";
}

Weapon::Weapon( const std::string& type ) {
	this->type = type;
}

Weapon::~Weapon( void ) {}

const std::string&	Weapon::getType( void ) const {
	const std::string& ret = type;
	return (ret);
}

void	Weapon::setType( const std::string& ntype ) {
	type = ntype;
}
