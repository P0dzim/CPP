/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:06:32 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:06:34 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Harl {
	private:
		void			debug( void );
		void			info( void );
		void			warning( void );
		void			error( void );
		typedef void	(Harl::*t_func)( void );
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};
