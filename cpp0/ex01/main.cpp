/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:21:16 by vitosant          #+#    #+#             */
/*   Updated: 2025/12/19 15:24:01 by vitosant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void) {
	PhoneBook	phone;
	std::string	command;

	while (true)
	{
		std::cin >> command;
		if (command == "ADD")
		{}
		if (command == "SEARCH")
		{}
		if (command == "EXIT")
			break ;
	}
	return (0);
}