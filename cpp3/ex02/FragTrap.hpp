/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:04:13 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 14:04:17 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& base );
		FragTrap& operator=( const FragTrap& base );
		~FragTrap( void );

		void	highFivesGuys( void );
};
