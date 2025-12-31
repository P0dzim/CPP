/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:11:17 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 13:24:30 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ) {
	setHit(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "===FragTrap default constructor called===" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name) {
	setHit(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "===FragTrap name constructor called===" << std::endl;
}

FragTrap::FragTrap( const FragTrap& base ): ClapTrap(base) {
	std::cout << "===FragTrap copy constructor called===" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& base ) {
	setName(base.getName());
	setHit(base.getHit());
	setEnergy(base.getEnergy());
	setAttack(base.getAttack());
	return (*this);
}

FragTrap::~FragTrap( void ){}

void	FragTrap::highFivesGuys( void ) {
	std::cout << " ⠀  ⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠀⠀⠘⣷⣤⡀⠀⠀⠀⠀⣰⣿⡄⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣦⡀⢀⣼⣿⣿⣧⠀⠀⢀⣠⣶⣿⡿⠀⠀⠀⠀⠀" << std::endl
			<< "⠀⣀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣾⣿⣿⣿⣿⣦⣾⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀" << std::endl
			<< "⠀⠈⠻⣿⣿⣶⣶⣶⣬⣿⣿⣿⠀⢸⣿⣿⡏⠀⣸⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⠀⢸⣿⡿⠀⢰⣿⣿⠟⠉⣿⣿⣷⣶⣶⡶⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⠀⠸⣿⠁⢀⣿⡿⠃⢠⣾⣿⣿⣿⣿⡟⠁⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⢀⣤⣾⣷⡀⠈⠻⣇⠀⠀⠀⠀⠘⠟⠁⣴⣿⡿⠟⢿⣿⠏⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⢀⣴⣿⣿⣿⣿⣿⣆⠀⠉⠀⠀⠀⠀⠀⠀⠀⠛⠋⣀⣴⣾⣿⣆⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⠙⠛⠛⠿⠿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣷⡀⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣷⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⠛⠛⠛⠛⠻⠿⠿⠦⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠇⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠀⠛⠛⠉⠉⠀⠀⠀⠀⠀⢸⡿⠛⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
			<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠁⠀⠀⠙⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
			<< "           HI-FIVE" << std::endl;
}
