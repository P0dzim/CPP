/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:29:19 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:29:22 by vitosant         ###    ########.fr      */
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
