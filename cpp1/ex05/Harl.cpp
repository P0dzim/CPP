/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:42:32 by vitor             #+#    #+#             */
/*   Updated: 2025/12/27 11:39:51 by vitor            ###   ########.fr       */
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
