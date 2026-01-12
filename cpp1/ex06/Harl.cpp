/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:42:47 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:15:51 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::complain( std::string filter ) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func		function[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			find = 0;
	int			limit = 0;

	while (limit < 4 && !find)
	{
		find = (filter == levels[limit]);
		limit++;
	}
	switch (limit - find)
	{
		case 0:
		  (this->*function[0])();
		case 1:
		  (this->*function[1])();
		case 2:
		  (this->*function[2])();
		case 3:
		  (this->*function[3])();
		  break;
		default:
			std::cerr << "Invalid filter." << std::endl;
	}
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
