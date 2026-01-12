/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:52:51 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 13:55:05 by vitosant         ###    ########.fr      */
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
