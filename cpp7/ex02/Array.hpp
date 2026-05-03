/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 11:00:09 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 11:09:06 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>

template<typename T>
class Array {
	private:
		T*			arr;
		std::size_t len;
	public:
		Array( void );
		Array( const unsigned int& n );
		Array( const Array& base );
		Array& operator=( const Array& other );
		~Array( void );

		T&			operator[]( const unsigned int i );
		const T&	operator[](unsigned int i) const;
		const std::size_t& size( void ) const;
};
#include "Array.tpp"
