/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:51:50 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 17:52:22 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie {

	private:
		std::string name;

	public:
		void	announce( void ) const;
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
};
