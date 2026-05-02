/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:19:26 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 15:19:27 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& base );
		ScalarConverter& operator=( const ScalarConverter& other );
		~ScalarConverter( void );

		static void	printChar( double& num );
		static void	printInt( double& num );
		static void	printFloat( double& num );
		static void	printDouble( double& num );

	public:
		static void	convert( std::string str );
};
