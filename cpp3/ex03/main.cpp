/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:52:54 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 13:23:46 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main( void ) {
	ScavTrap rb1("Cesar"), rb2("Alexandre");

	rb1.attack(rb2.getName());
	rb2.takeDamage(1);
	rb2.beRepaired(1);
	rb1.guardGate();

	FragTrap fb1("Augusto");
	fb1.highFivesGuys();

	DiamondTrap dr1("Marcos");
	dr1.whoAmI();

	return (0);
}
