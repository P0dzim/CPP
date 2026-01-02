/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 13:17:20 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 13:43:47 by vitor            ###   ########.fr       */
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
