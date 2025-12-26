/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:09:49 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 19:23:50 by vitor            ###   ########.fr       */
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