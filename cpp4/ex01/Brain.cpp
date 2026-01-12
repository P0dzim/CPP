/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:25:59 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:26:00 by vitosant         ###    ########.fr      */
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
