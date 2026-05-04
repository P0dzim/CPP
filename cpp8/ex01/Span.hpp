/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:17:39 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 15:17:39 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <ostream>
#include <vector>

class Span{
	private:
		std::size_t 		_len;
		std::vector<int>	_vec;
	public:
		Span( void );
		Span( const unsigned int n );
		Span( const Span& base );
		Span&	operator=( const Span& other );
		~Span( void );

		const std::vector<int>& getVec( void ) const;

		void		addNumber( const int n );
		std::size_t	shortestSpan( void );
		std::size_t	longestSpan( void );

		template<typename T>
		void	addNumberRange( const T& begin, const T& end );
		template<typename T>
		void	addNumberRange( T& begin, T& end );
};

std::ostream& operator<<( std::ostream &os, Span &obj );

#include "Span.tpp"
