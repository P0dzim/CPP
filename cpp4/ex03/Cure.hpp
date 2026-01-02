/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:36:24 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 19:37:40 by vitor            ###   ########.fr       */
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
