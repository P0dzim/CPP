/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:52:40 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 13:52:43 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap {
	private:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_attack;
	public:
		ClapTrap( void );
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& base );
		ClapTrap& operator=(const ClapTrap& base);
		~ClapTrap( void );

		std::string getName( void ) const;
		int			getHit( void ) const;
		int			getEnergy( void ) const;
		int			getAttack( void ) const;

		void		setName( const std::string& name );
		void		setHit( const int hit );
		void		setEnergy( const int energy );
		void		setAttack( const int attack  );

		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
};
