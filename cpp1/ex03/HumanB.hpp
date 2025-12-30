/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:09:46 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:27:23 by vitor            ###   ########.fr       */
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
