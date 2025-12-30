/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:32:03 by vitor             #+#    #+#             */
/*   Updated: 2025/12/28 12:48:13 by vitor            ###   ########.fr       */
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

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& num);
