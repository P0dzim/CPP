/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:02:25 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:02:27 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>

class HumanA {
	private:
		Weapon*		weap;
		std::string	name;
	public:
		void	attack( void ) const;
		HumanA( const std::string& name, Weapon& weapon );
		~HumanA( void );
};
