/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:35:04 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 16:35:04 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cerr << "Invalid input. Try ./btc <valid file>" << std::endl;
		return (1);
	}

	return (0);
}
