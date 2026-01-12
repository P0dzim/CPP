/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:26:07 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:26:10 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain( void );
		Brain( const Brain& base );
		Brain& operator=( const Brain& other );
		~Brain( void );

		std::string getIdea( int i ) const;
};
