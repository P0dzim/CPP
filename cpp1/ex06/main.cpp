/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:49:33 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:22:23 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int ac, char **av ) {
	Harl		notify;

	if (ac != 2 || *av[1] == '\0')
		return (1);
	notify.complain( av[1] );
	return (0);
}
