/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:38:26 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 18:38:26 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdint.h>
#include <string>

typedef	struct s_data
{
	std::string str;
}	Data;

class Serializer {
	private:
		Serializer( void );
		Serializer( const Serializer& base );
		Serializer& operator=( const Serializer& other );
		~Serializer( void );

	public:
		static uintptr_t	serialize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );
};
