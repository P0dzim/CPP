/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:54:11 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 17:54:14 by vitosant         ###    ########.fr      */
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
