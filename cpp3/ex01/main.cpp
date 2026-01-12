/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:56:56 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 13:57:10 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main( void ) {
	ScavTrap rb1("Cesar"), rb2("Alexandre");

	rb1.attack(rb2.getName());
	rb2.takeDamage(1);
	rb2.beRepaired(1);
	rb1.guardGate();
	return (0);
}
