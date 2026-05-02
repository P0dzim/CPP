/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:37:27 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 18:37:27 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <stdint.h>

int	main( void )
{
	uintptr_t	serialized;
	Data		player;
	Data		*deserialized;

	player.str = "Jonas";
	serialized = Serializer::serialize(&player);
	std::cout << "Serialized address: " << serialized << std::endl;
	deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized player name: " << deserialized->str << std::endl;
	return (0);
}
