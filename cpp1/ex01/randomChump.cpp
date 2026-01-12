/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:58:25 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 17:58:29 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	randomChump( std::string name ) {
	Zombie walker = Zombie(name);
	walker.announce();
}
