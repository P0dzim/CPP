/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:56:47 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 17:14:18 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main( int ac, char **av )
{
	if (ac != 2)
		std::cerr << "./a.out <param>" << std::endl;
	else
		ScalarConverter::convert(av[1]);
	return (0);
}
