/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:01:31 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/15 12:01:31 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cerrno>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int	parser( int ac, char **av, std::vector<long>& arr );

int	main( int ac, char **av )
{
	std::vector<long> arr;

	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe <input(s)>." << std::endl;
		return (1);
	}

	if (parser(ac,av,arr) || arr.size() == 0)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	PmergeMe::merge_sort(arr);
	return (0);
}

int	parser( int ac, char **av, std::vector<long>& arr )
{
	std::string	input(av[1]);
	for(int i = 2; i < ac; i++)
		input = input + ' ' + av[i];

	std::string 		element;
	char				*err;
	std::stringstream	ss(input);

	errno = 0;
	while (std::getline(ss, element, ' '))
	{
		if (element.empty()) continue ;

		long num = std::strtol(element.c_str(), &err, 10);
		if (*err || num < 0 || errno) return (1);

		std::vector<long>::iterator iter = std::find(arr.begin(), arr.end(), num);
		if (iter != arr.end()) return (1);

		arr.push_back(num);
	}
	return (0);
}
