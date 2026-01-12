/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:58 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:31:59 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		Ice( const Ice& base );
		Ice& operator=( const Ice& other );
		~Ice( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );
};
