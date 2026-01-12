/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:01:38 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:04:48 by vitosant         ###    ########.fr      */
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
