/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:11:52 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 09:56:47 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap( void );
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& other );
		ScavTrap& operator=( const ScavTrap& other );
		~ScavTrap( void );

		void	guardGate( void );
		void	attack( const std::string& target );
};
