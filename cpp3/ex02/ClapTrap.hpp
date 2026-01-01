/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:02:54 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 09:48:44 by vitor            ###   ########.fr       */
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

		virtual void attack( const std::string& target );
		void		 takeDamage( unsigned int amount );
		void		 beRepaired( unsigned int amount );
};
