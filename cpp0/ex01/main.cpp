/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:41:54 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 11:42:01 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static void	menuMsg(void);

int	main(void) {
	PhoneBook	phone;
	std::string	command;

	while (true)
	{
		menuMsg();
		std::getline(std::cin, command);
		if (command == "ADD")
			phone.addContact();
		else if (command == "SEARCH")
			phone.showList();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}

static void	menuMsg(void) {
	std::cout << std::endl << "====" << "MENU" << "====" <<  std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "============" << std::endl << std::endl;
}
