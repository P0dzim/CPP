/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:59:39 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:28:17 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name ) {
	this->name = name;
}

Zombie::~Zombie( void ) {
	std::cout << name << ": is alive." << std::endl;
};

void	Zombie::announce( void ) const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::init (std::string name) {
	this->name = name;
}
