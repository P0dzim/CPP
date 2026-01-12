/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:08:57 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 14:09:01 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name;
	public:
		DiamondTrap( void );
		DiamondTrap( const std::string& name_ );
		DiamondTrap( const DiamondTrap& base );
		DiamondTrap& operator=( const DiamondTrap& other );
		~DiamondTrap( void );

		std::string getDiamondName( void ) const;
		void 		setDiamondName( const std::string& name_ );
		void		whoAmI( void ) const;
};
