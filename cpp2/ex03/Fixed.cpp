/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:46:58 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 09:15:12 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {
	_raw = 0;
}

Fixed::Fixed ( const Fixed& point ) {
	*this = point;
}

Fixed::Fixed ( int const num ) {
	_raw = (num << 8);
}

Fixed::Fixed ( float const num ) {
	double	temp = num;

	temp *= (1 << _mantissa); 
	if (num > 0)
		temp += 0.5;
	if (num < 0)
		temp -= 0.5;
	_raw = (int) temp;
}

Fixed &Fixed::operator=(const Fixed& old) {
	if (&old == this)
		return (*this);
	_raw = old.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
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

std::ostream&	operator<<( std::ostream& out, const Fixed& num ) {
	out << num.toFloat();
    return (out);
}

bool Fixed::operator==( const Fixed& other ) const{
	return (_raw == other.getRawBits());
}

bool Fixed::operator<=( const Fixed& other ) const{
	return (_raw <= other.getRawBits());
}

bool Fixed::operator>=( const Fixed& other ) const{
	return (_raw >= other.getRawBits());
}

bool Fixed::operator<( const Fixed& other ) const{
	return (_raw < other.getRawBits());
}

bool Fixed::operator>( const Fixed& other ) const{
	return (_raw < other.getRawBits());
}

bool Fixed::operator!=( const Fixed& other ) const{
	return (_raw != other.getRawBits());
}

Fixed Fixed::operator+( const Fixed& other ) const{
	float raw;

	raw = toFloat() + other.toFloat();
	return (Fixed (raw));
}

Fixed Fixed::operator-( const Fixed& other ) const{
	float raw;

	raw = toFloat() - other.toFloat();
	return (Fixed (raw));
}

Fixed Fixed::operator*( const Fixed& other ) const{
	float raw;

	raw = toFloat() * other.toFloat();
	return (Fixed (raw));
}

Fixed Fixed::operator/( const Fixed& other ) const{
	float raw;

	raw = toFloat() / other.toFloat();
	return (Fixed (raw));
}

Fixed& Fixed::operator++( void ) {
	_raw++;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed a = *this;

	_raw++;
	return (a);
}

Fixed& Fixed::operator--( void ) {
	_raw--;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	Fixed a = *this;

	_raw--;
	return (a);
}

Fixed& Fixed::max( Fixed& left, Fixed& right ) {
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

const Fixed& Fixed::max( const Fixed& left, const Fixed& right ) {
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

Fixed& Fixed::min( Fixed& left, Fixed& right ) {
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

const Fixed& Fixed::min( const Fixed& left, const Fixed& right ) {
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}