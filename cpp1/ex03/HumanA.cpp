/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:03:48 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 19:27:20 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( const std::string& name, Weapon& weapon ) {
	this->weap = &weapon;
	this->name = name;
}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void ) const {
	std::cout << name << " attacks with their " << weap->getType() << std::endl;
}
