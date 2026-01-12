/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:57:35 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 17:57:40 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie {

	private:
		std::string name;

	public:
		void	announce( void ) const;
		void	init( std::string name );
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
};
