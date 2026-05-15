/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 08:24:50 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/15 08:24:50 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
class RPN{
	private:
		RPN( void );
		RPN( const RPN& base );
		RPN& operator=( const RPN& other );
		~RPN( void );

	public:
		static void	calculation( std::string input );
};
