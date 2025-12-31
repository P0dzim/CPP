/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:56:40 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 13:34:14 by vitor            ###   ########.fr       */
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
