/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:30:36 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 09:30:48 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool	isSameSide(Point const a, Point const b, Point const c, Point const point);

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	bool SameSideA = isSameSide(a, b, c, point);
	bool SameSideB = isSameSide(b, c, a, point);
	bool SameSideC = isSameSide(c, a, b, point);
	return (SameSideA && SameSideB && SameSideC);
}

static bool	isSameSide(Point const a, Point const b, Point const c, Point const point)
{

	int aTerm = (-b.getY().getRawBits() + a.getY().getRawBits());
	int bTerm = (b.getX().getRawBits() - a.getX().getRawBits());
	int cTerm = -aTerm * a.getX().getRawBits() - bTerm * a.getY().getRawBits();
	int sign1, sign2;

	sign1 = (aTerm * point.getX().getRawBits() + bTerm * point.getY().getRawBits() + cTerm);
	sign2 = (aTerm * c.getX().getRawBits() + bTerm * c.getY().getRawBits() + cTerm);
	return ((sign1 > 0 && sign2 > 0) || (sign1 < 0 && sign2 < 0));
}
