/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:57:20 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 17:57:23 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );
void	randomChump( std::string name );
