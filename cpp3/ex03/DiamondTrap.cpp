/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:08:39 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 14:08:42 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) {
	setHit(100);
	setEnergy(50);
	setAttack(30);
	std::cout << "===DiamondTrap default constructor called===" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name_ ) {
	setDiamondName(name_);
	setName(std::string(name_ + "_clap_name"));
	setHit(100);
	setEnergy(50);
	setAttack(30);
	std::cout << "===DiamondTrap name constructor called===" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& base ): ClapTrap(base), FragTrap(base), ScavTrap(base) {
	setDiamondName(base.getDiamondName());
	std::cout << "===DiamondTrap copy constructor called===" << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other ) {
	setDiamondName(other.getDiamondName());
	setName(other.getName());
	setHit(other.getHit());
	setEnergy(other.getEnergy());
	setAttack(other.getAttack());
	return (*this);
}


DiamondTrap::~DiamondTrap( void ) {
	std::cout << "===DiamondTrap destructor called===" << std::endl;
}

std::string DiamondTrap::getDiamondName( void ) const {
	return (this->name);
}

void	DiamondTrap::setDiamondName( const std::string& name_ ) {
	name = name_;
}

void	DiamondTrap::whoAmI( void ) const {
	std::cout << name << ": Who am I? " << name << " or " << getName() << std::endl;
}
