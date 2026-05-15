/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 08:17:44 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/15 08:17:44 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <exception>
#include <iostream>

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./RPN <input>." << std::endl;
		return (1);
	}
	try
	{
		RPN::calculation(av[1]);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
