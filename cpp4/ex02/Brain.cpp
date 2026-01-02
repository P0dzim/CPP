/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 13:21:42 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 14:17:21 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ) {
	for(int i = 0; i < 100; i++)
		ideas[i] = "IDEA_" + i;
	ideas[42].assign("EASTER EGG");
	std::cout << "===Brain default constructor called===" << std::endl;
}

Brain::Brain( const Brain& base ) {
	for(int i = 0; i < 100; i++)
		ideas[i] = base.getIdea(i);
	std::cout <<  "===Brain copy constructor called===" << std::endl;
}

Brain& Brain::operator=( const Brain& base ) {
	for(int i = 0; i < 100; i++)
		ideas[i] = base.getIdea(i);
	return (*this);
}

Brain::~Brain( void ) {
	std::cout <<  "===Brain destructor called===" << std::endl;
}

std::string Brain::getIdea( int i ) const {
	if (i < 0 || i > 99)
		return ("");
	return (ideas[i]);
}
