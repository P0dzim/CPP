/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:50:40 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 17:50:43 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void) {
	Zombie *ref;

	ref = newZombie("HEAP");
	ref->announce();
	randomChump("STACK");
	delete (ref);
	return (0);
}
