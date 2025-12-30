/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:32:03 by vitor             #+#    #+#             */
/*   Updated: 2025/12/29 19:44:11 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Fixed {
	private:
		int					_raw;
		static int const	_mantissa = 8;
	public:
		Fixed( void );
		Fixed( int const num );
		Fixed( float const num );
		Fixed( const Fixed& point );
		Fixed &operator=( const Fixed& old );
		~Fixed( void );

		bool operator==( const Fixed& other ) const;
		bool operator<=( const Fixed& other ) const;
		bool operator>=( const Fixed& other ) const;
		bool operator<( const Fixed& other ) const;
		bool operator>( const Fixed& other ) const;
		bool operator!=( const Fixed& other ) const;
		Fixed operator+( const Fixed& other ) const;
		Fixed operator-( const Fixed& other ) const;
		Fixed operator*( const Fixed& other ) const;
		Fixed operator/( const Fixed& other ) const;
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--(int);

		static Fixed& max( Fixed& left, Fixed& right );
		static Fixed& min( Fixed& left, Fixed& right );
		static const Fixed& max( const Fixed& left, const Fixed& right );
		static const Fixed& min( const Fixed& left, const Fixed& right );
		
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream&	operator<<( std::ostream& out, const Fixed& num );
