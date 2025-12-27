/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:40:09 by vitor             #+#    #+#             */
/*   Updated: 2025/12/27 10:07:46 by vitor            ###   ########.fr       */
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