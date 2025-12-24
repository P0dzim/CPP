/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:21:16 by vitosant          #+#    #+#             */
/*   Updated: 2025/12/24 19:23:27 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static void	errorMsg(void);

int	main(void) {
	PhoneBook	phone;
	std::string	command;

	while (true)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			phone.addContact();
		else if (command == "SEARCH")
			phone.showList();
		else if (command == "EXIT")
			break ;
		else
			errorMsg();
	}
	return (0);
}

static void	errorMsg(void) {
	std::cerr << std::endl << "Write a valid input" << std::endl;
	std::cerr << "1) ADD" << std::endl;
	std::cerr << "2) SEARCH" << std::endl;
	std::cerr << "3) EXIT" << std::endl << std::endl;
}