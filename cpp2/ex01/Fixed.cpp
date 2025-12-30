/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:46:58 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 09:13:15 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const Fixed& point ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = point;
}

Fixed::Fixed ( int const num ) {
	_raw = (num << 8);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed ( float const num ) {
	float	temp = num;

	temp *= (1 << _mantissa); 
	if (num >= 0)
		temp += 0.5;
	else
		temp -= 0.5;
	_raw = (int) temp;
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed& old ) {
	if (&old == this)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	_raw = old.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	return (_raw);
}

void	Fixed::setRawBits( int const raw ) {
	_raw = raw;
}

float	Fixed::toFloat( void ) const {
	float	ret;

	ret = (float) _raw / (1 << _mantissa);
	return (ret);
}

int	Fixed::toInt( void ) const {
	return ((int) toFloat());
}

std::ostream&	operator<<(std::ostream& out, const Fixed& num) {
	out << num.toFloat();
    return (out);
}
