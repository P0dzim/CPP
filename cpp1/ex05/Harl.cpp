/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:06:23 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:06:26 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::complain( std::string level ) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func		function[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*function[i])();
			return ;
		}
	}
	std::cerr << "Invalid level." << std::endl;
}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl << "OH MY GOD... GNL AGAIN." << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl << "GNL is  a good project." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl << "GNL may cause leaks." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl << "GNL has a segmentation fault." << std::endl;
}
