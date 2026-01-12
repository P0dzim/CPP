/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:03:13 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:03:15 by vitosant         ###    ########.fr      */
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
