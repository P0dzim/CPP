/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:13:42 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:26:57 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( void ) {
	Harl		notify;
	std::string	command;

	while (std::getline(std::cin, command))
		notify.complain(command);
	return (0);
}
