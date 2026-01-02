/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:10:22 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 20:59:43 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "GarbageCollector.hpp"
#include <string>

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria*	_inventory[4];
		int			_freeSlots;
	public:
		Character( void );
		Character( const std::string& name );
		Character( const Character& base );
		Character& operator=( const Character& other );
		virtual ~Character( void );

		std::string const & getName( void ) const;
		int					getFreeSlots( void ) const;
		void				setFreeSlots( const int i );
		AMateria*			getSlot( const int i ) const;
		void				setSlot( const int i, AMateria* m);

		void 				equip( AMateria* m );
		void 				unequip( int idx );
		void				use(int idx, ICharacter& target);
};
