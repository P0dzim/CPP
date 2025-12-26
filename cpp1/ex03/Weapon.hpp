/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:48:39 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 19:22:06 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		const std::string&	getType( void ) const;
		void				setType( const std::string& type );
		Weapon( void );
		Weapon(const std::string& type);
		~Weapon( void );
};