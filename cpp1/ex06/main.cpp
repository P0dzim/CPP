/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:13:42 by vitor             #+#    #+#             */
/*   Updated: 2025/12/27 11:34:03 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int ac, char **av ) {
	Harl		notify;
	std::string	command;

	if (ac != 2 || *av[1] == '\0')
		return (1);
	while (std::getline(std::cin, command))
		notify.complain(command, av[1]);
	return (0);
}