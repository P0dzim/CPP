/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:52:54 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 13:25:09 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main( void ) {
	ClapTrap rb1("Cesar"), rb2("Alexandre");

	rb1.attack(rb2.getName());
	rb2.takeDamage(1);
	rb2.beRepaired(1);
	return (0);
}
