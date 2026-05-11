/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:35:04 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 16:35:04 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	BitcoinExchange	exchange;

	(void) av;
	if (ac != 2)
	{
		std::cerr << "Invalid input. Try ./btc <valid file>" << std::endl;
		return (1);
	}
	try {
		exchange.loadData();
		exchange.findData(av[1]);
	} catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
