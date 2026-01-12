/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:29 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:31:30 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure( void );
		Cure( const Cure& base );
		Cure& operator=( const Cure& other );
		~Cure( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );
};
