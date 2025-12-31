/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:54:23 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 11:54:09 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& base );
		FragTrap& operator=( const FragTrap& base );
		~FragTrap( void );

		void	highFivesGuys( void );
};
