/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:47:10 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 19:11:45 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <stdint.h>

Serializer::Serializer( void ) {}

Serializer::Serializer( const Serializer& base )
{
	(void) base;
}

Serializer& Serializer::operator=( const Serializer& other )
{
	(void) other;
	return (*this);
}

Serializer::~Serializer( void ) {}

uintptr_t	Serializer::serialize( Data* ptr )
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}
