/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:00 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:31:00 by vitosant         ###    ########.fr      */
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
