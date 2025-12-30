/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:32:12 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:28:30 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		horde[i].init(name);
	return (horde);
}
