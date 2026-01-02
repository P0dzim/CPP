/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:51:44 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 17:41:20 by vitor            ###   ########.fr       */
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
