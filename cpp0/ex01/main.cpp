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
