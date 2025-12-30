/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:56:08 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:28:53 by vitor            ###   ########.fr       */
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
