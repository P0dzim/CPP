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
#include <cstring>
#include <ctime>
#include <sys/time.h>
#include <iostream>
#include <ostream>
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

static long	time_ms(void)
{
	struct timeval	now;
	long			time;

	std::memset(&now, 0, sizeof(struct timeval));
	gettimeofday(&now, NULL);
	time = now.tv_sec * 1000 + now.tv_usec / 1000;
	return (time);
}

void PmergeMe::makeContainers( std::vector<t_vec_node> &vec )
{
	long time1, time2;

	std::cout << "time ms vec: ";
	time1 = time_ms();
	mergeInsertionSort(vec);
	time2 = time_ms();

	std::cout << time2 - time1 << std::endl;

}

std::vector<long>	jacobsthal_sequence( std::size_t len )
{
	std::vector<long> sequence;

	sequence.push_back(1);
	if (len == 1) return(sequence);
		sequence.push_back(std::min(len, static_cast<std::size_t>(3)));
	if (len <= 3) return (sequence);

	std::size_t i = 0;
	while (i < len)
	{
		i = sequence.back() + 2 * sequence.at(sequence.size() - 2);
		sequence.push_back(std::min(len, i));
	}
	return (sequence);
}

std::vector<long>	make_idx_sequence( std::size_t len )
{
	std::vector<long>	jacob;
	std::vector<long>	index_sequence;

	jacob = jacobsthal_sequence(len);
	for (std::size_t i = 1; i < jacob.size(); i++)
	{
		long	jacob_val = jacob[i] - 1;

		for (long j = jacob_val; j >= jacob[i - 1]; --j)
			index_sequence.push_back(j);
	}
	return (index_sequence);
}
