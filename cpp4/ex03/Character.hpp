/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:15 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:31:16 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria*	_inventory[4];
		int			_freeSlots;
		int			getFreeSlots( void ) const;
		void		setFreeSlots( const int freeSlots );
		AMateria*	getSlot( const int idx ) const;
		void		setSlot( const int idx, AMateria* m);
	public:
		Character( void );
		Character( const std::string& name );
		Character( const Character& base );
		Character& operator=( const Character& other );
		~Character( void );

		std::string const & getName( void ) const;

		void 				equip( AMateria* m );
		void 				unequip( int idx );
		void				use(int idx, ICharacter& target);
};
