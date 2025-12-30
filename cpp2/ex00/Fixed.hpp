/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:32:03 by vitor             #+#    #+#             */
/*   Updated: 2025/12/27 19:26:16 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {
	private:
		int					_raw;
		static int const	_manBits = 8;
	public:
		Fixed( void );
		Fixed( const Fixed& point );
		Fixed &operator=(const Fixed& old);
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};