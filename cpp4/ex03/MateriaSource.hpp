/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:59:26 by vitor             #+#    #+#             */
/*   Updated: 2026/01/02 14:54:11 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	_slots[4];
		int			_freeSlots;
		int			getFreeSlots( void ) const;
		void		setFreeSlots( const int idx );
		AMateria*	getSlot( const int idx ) const;
		void		setSlot( const int idx, AMateria* m );
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& base );
		MateriaSource& operator=( const MateriaSource& other );
		~MateriaSource( void );

		void		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
};
