/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 09:49:09 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/16 09:49:09 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>
#include <vector>

PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( const PmergeMe& base )
{
	(void) base;
}

PmergeMe::~PmergeMe( void ) {}

PmergeMe& PmergeMe::operator=( const PmergeMe& other )
{
	(void) other;
	return (*this);
}

void PmergeMe::merge_sort( std::vector<long> &arr )
{

}

static std::vector<long> jacobsthal_sequence( std::size_t len )
{
	std::vector<long> sequence;

	sequence.push_back(1);
	if (len == 1) return(sequence);
	sequence.push_back(3);
	if (len <= 3) return (sequence);

	std::size_t i = 0;
	while (i < len)
	{
		i = sequence.back() + 2 * sequence.at(sequence.size() - 2);
		sequence.push_back(i);
	}
	return (sequence);
}
