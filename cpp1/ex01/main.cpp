/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:14:08 by vitor             #+#    #+#             */
/*   Updated: 2025/12/30 10:28:07 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>
int	main(void) {
	Zombie	*heap;
	Zombie	*horde;

	heap = newZombie("HEAP");
	heap->announce();
	randomChump("STACK");
	horde = zombieHorde(10, "BRUNO");
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << "_";
		horde[i].announce();
	}
	delete (heap);
	delete[] (horde);
	return (0);
}
