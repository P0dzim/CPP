/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:01:04 by vitor             #+#    #+#             */
/*   Updated: 2025/12/29 19:44:28 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point( void ) {}

Point::Point( const float x, const float y ) : x( x ), y ( y ) {}

Point::Point( const Point& old ): x( old.x ), y ( old.y ) {}

Point& Point::operator=( const Point& old ) {
	std::cerr << "Invalid operation." << std::endl;
	(void) old;
	return (*this);
}

Point::~Point( void ) {}

const Fixed& Point::getX( void ) const {
	return (x);
}

const Fixed& Point::getY( void ) const {
	return (y);
}
