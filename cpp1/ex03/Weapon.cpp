/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:51:42 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:27:38 by vitor            ###   ########.fr       */
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
