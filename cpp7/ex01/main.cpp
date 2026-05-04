/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:31:39 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 10:31:39 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>
#include <iostream>
#include <ostream>

void	sumOne( int& num )
{
	num++;
}

void	sumOneConst( const int& num )
{
	(void) num;
}

void	ft_tolower( char& c )
{
	c = tolower(c);
}

void	printString( std::string& str )
{
	std::cout << str << ' ';
}
int	main( void )
{
	{
		int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

		std::cout << "=========" << "INTEGER ARRAY" << "=========" << std::endl;
		printArr(arr, 10);
		iter(arr, 10, sumOne);
		printArr(arr, 10);
		std::cout << std::endl;

		const int const_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "=========" << "CONST INTEGER ARRAY" << "=========" << std::endl;
		printArr(const_arr, 10);
		iter(const_arr, 10, sumOneConst);
		printArr(const_arr, 10);
		std::cout << std::endl;
	}
	{
		char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

		std::cout << "=========" << "CHAR ARRAY" << "=========" << std::endl;
		printArr(arr, 10);
		iter(arr, 10, ft_tolower);
		printArr(arr, 10);
		std::cout << std::endl;
	}
	return (0);
}
