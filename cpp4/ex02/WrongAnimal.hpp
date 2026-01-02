/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:29:26 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 11:41:57 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& base );
		WrongAnimal& operator=( const WrongAnimal& other );
		virtual ~WrongAnimal( void );

		std::string getType( void ) const;
		void		setType(const std::string& type );

		virtual void	makeSound( void ) const;
};
