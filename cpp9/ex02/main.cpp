/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:01:31 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/19 10:47:04 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cerrno>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

static bool	parser( int ac, char **av, std::vector<t_vec_node>& vec );

int	main( int ac, char **av )
{
	std::vector<t_vec_node> vec;

	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe <input(s)>." << std::endl;
		return (1);
	}

	if (parser(ac,av,vec) || vec.size() == 0)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	PmergeMe::makeContainers(vec);
	return (0);
}

// static bool	is_iqual( const std::vector<t_vec_node>& vec, const t_vec_node& node )
// {
// 	std::vector<t_vec_node>::const_iterator	iter = vec.begin();

// 	while (iter != vec.end())
// 	{
// 		if (iter->num == node.num)
// 			return (true);
// 		iter++;
// 	}
// 	return (false);
// }

static bool	parser( int ac, char **av, std::vector<t_vec_node>& vec )
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

		t_vec_node node;

		node.num = std::strtol(element.c_str(), &err, 10);
		if (*err || node.num < 0 || errno) return (1);
	//	if (is_iqual(vec, node)) return (1);

		vec.push_back(node);
	}
	return (0);
}
