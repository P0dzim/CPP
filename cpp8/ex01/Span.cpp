/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:21:09 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 15:21:09 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>

Span::Span( void ): _len(0) {}

Span::Span(	const unsigned int n ): _len(n) {}

Span::Span( const Span& base ): _len(base._len), _vec(base._vec) {}

Span::~Span( void ) {}

Span& Span::operator=( const Span& other )
{
	if (&other == this)
		return (*this);
	_len = other._len;
	_vec = other._vec;
	return (*this);
}

void Span::addNumber( const int n )
{
	if (_vec.size() >= _len) throw std::exception();
	_vec.push_back(n);
}

std::size_t	Span::shortestSpan( void )
{
	std::vector<int>	sorted(_vec);
	std::size_t			shortest = -1;

	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::iterator curr = sorted.begin(); curr != sorted.end(); curr++)
	{
		if (curr == sorted.begin()) continue ;
		std::vector<int>::iterator last = curr;

		last--;
		if (static_cast<std::size_t>(*curr - *last) < shortest)
			shortest = static_cast<std::size_t>(*curr - *last);
	}
	return (shortest);
}

std::size_t	Span::longestSpan( void )
{
	std::vector<int>	sorted(_vec);

	if (_vec.size() <= 1) throw std::exception();
	std::sort(sorted.begin(), sorted.end());
	return (static_cast<std::size_t>(*--sorted.end() - *sorted.begin()));
}

const std::vector<int>& Span::getVec( void ) const
{
	return (_vec);
}

std::ostream& operator<<( std::ostream &os, Span &obj )
{
	const std::vector<int>& vec = obj.getVec();

	for (std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); i++)
		os << ' ' << *i << ' ';
	return (os);
}
