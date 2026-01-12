/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:02:36 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:02:38 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include "Weapon.hpp"

HumanB::HumanB( const std::string& name ) {
	this->weap = NULL;
	this->name = name;
}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void ) const {
	if (weap != NULL)
		std::cout << name << " attacks with their " << weap->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	weap = &weapon;
}
