/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:06:42 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:15:00 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( void ) {
	Harl		notify;
	std::string	command;

	std::cout << "===OPTIONS===" << std::endl
			  << "DEBUG" << std::endl
			  << "INFO" << std::endl
			  << "WARNING" << std::endl
			  << "ERROR" <<	std::endl
			  << "=============" << std::endl;
	while (std::getline(std::cin, command))
		notify.complain(command);
	return (0);
}
