/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:36:08 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 14:36:08 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <iostream>
#include <vector>

int	main( void )
{
	std::vector<int> arr;

	for (int i = 0; i < 10; i++)
		arr.push_back(i);
	for (int i = 0; i < 15; i++)
	{
		try
		{
			std::vector<int>::iterator	addr = easyfind(arr, i);
			std::cout << "O valor " << i << " está na posição número: " << addr - arr.begin() + 1 << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << "O valor " << i << " não foi encontrado" << std::endl;
		}
	}
	return (0);
}
