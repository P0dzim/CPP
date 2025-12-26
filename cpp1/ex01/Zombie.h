/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:03:59 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 16:32:40 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );
void	randomChump( std::string name );