/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:32:13 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:32:15 by vitosant         ###    ########.fr      */
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
