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
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <list>
#include <utility>
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

void PmergeMe::makeContainers( std::vector<long> &arr )
{
	std::list<long>	lst;
	for(std::size_t i = 0; i < arr.size(); i++)
		lst.push_back(arr.at(i));


}

void	mergeInsertionSort( std::vector<std::pair<long, long>>& cont, bool is_odd = false, long num = 0 )
{
	std::vector<std::pair<long, long>>							winners, losers;
	typename std::vector<std::pair<long, long>>::iterator		iter = cont.begin();

	std::pair<long, long>	num1, num2;

	while (iter != cont.end())
	{
		num1 = *iter;
		iter++;
		if (iter == cont.end())
		{
			losers.push_back(num1);
			break ;
		}
		num2 = *iter;
		iter++;

		if (num1 > num2)
		{
			winners.push_back(num1);
			losers.push_back(num2);
		}
		else
		{
			winners.push_back(num2);
			losers.push_back(num1);
		}
	}
	if (winners.size() > 1)
		mergeInsertionSort(winners);

	std::vector<long>	jacob = jacobsthal_sequence(losers.size());
	std::vector<long> index_sequence;
	for (std::size_t i = 0; i < jacob.size(); i++)
	{
		long jacob_val = jacob[i];

		std::vector<std::pair<long, long>>::iterator pos =  std::lower_bound(winners.begin(), winners.begin() + jacob_val, jacob_val);
	}
}

std::vector<long>	jacobsthal_sequence( std::size_t len )
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
		sequence.push_back(std::min(i, len));
	}
	return (sequence);
}
