/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:57:17 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 19:27:00 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>

class HumanA{
	private:
		Weapon*		weap;
		std::string	name;
	public:
		void	attack( void ) const;
		HumanA( const std::string& name, Weapon& weapon );
		~HumanA( void );
};