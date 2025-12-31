/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:17:10 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 12:32:29 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) {
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "===Default ScavTrap constructor called===" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name) {
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "===ScavTrap constructor with name called===" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other) {}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	setName(other.getName());
	setHit(other.getHit());
	setEnergy(other.getEnergy());
	setAttack(other.getAttack());
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "==ScavTrap destructor called===" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << getName() << " on Gate keeper mode" << std::endl;
}
