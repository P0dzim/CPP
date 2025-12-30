/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:46:58 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:26:26 by vitor            ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void	Fixed::setRawBits( int const raw ) {
	_raw = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
