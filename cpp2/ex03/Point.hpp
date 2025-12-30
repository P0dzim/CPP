/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:55:59 by vitor             #+#    #+#             */
/*   Updated: 2025/12/28 15:51:24 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point& old );
		Point& operator=( const Point& old );
		~Point( void );

		const Fixed& getX( void ) const;
		const Fixed& getY( void ) const;
};