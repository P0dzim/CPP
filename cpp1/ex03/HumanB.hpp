/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:02:48 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:02:51 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon*		weap;
		std::string	name;
	public:
		void	attack( void ) const;
		void	setWeapon( Weapon& weapon );
		HumanB( const std::string& name);
		~HumanB( void );
};
