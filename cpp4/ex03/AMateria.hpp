/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:47:27 by vitor             #+#    #+#             */
/*   Updated: 2026/01/02 17:26:06 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ICharacter;

class AMateria
{
	private:
		std::string	_type;
	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria& base );
		AMateria& operator=( const AMateria& other );
		virtual ~AMateria( void );


		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
