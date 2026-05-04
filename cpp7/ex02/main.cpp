/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:58:39 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 10:58:39 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <iostream>

template<typename T>
static void	printArr(unsigned int len, Array<T> arr, std::string str = "")
{
	std::cout << str;
	for (unsigned int i = 0; i < len; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int	main( void )
{
	{
		Array<int> arr(10);
		Array<int> cpy(arr);
		std::cout << "===========INT===========" << std::endl;
		printArr(10, arr, "ORIGINAL: ");
		printArr(10, cpy, "COPY: ");

		for (int i = 0; i < 10; i++)
			arr[i] = i;
		std::cout << "modifying original..." << std::endl;
		std::cout << "modifying copy..." << std::endl;
		printArr(10, arr, "ORIGINAL: ");
		printArr(10, cpy, "COPY: ");
	}

	{
		std::string lst1[10] = {"A", "minha", "casa", "e", "amarela", "entao", "ela", "nao", "e", "branca"};
		std::string lst2[10] = {"A", "minha", "casa", "e", "azul", "entao", "ela", "nao", "e", "verde"};
		Array<std::string> arr(10);
		Array<std::string> cpy = arr;
		std::cout << "===========STRING===========" << std::endl;
		printArr(10, arr, "ORIGINAL: ");
		printArr(10, cpy, "COPY: ");

		for (int i = 0; i < 10; i++)
			arr[i] = lst1[i];
		for (int i = 0; i < 10; i++)
			cpy[i] = lst2[i];
		std::cout << "modifying original..." << std::endl;
		std::cout << "modifying copy..." << std::endl;
		printArr(10, arr, "ORIGINAL: ");
		printArr(10, cpy, "COPY: ");
	}

	{
		Array<char> arr(10);
		std::cout << "================ERROR=================" << std::endl;
		std::cout << "trying access a invalid index: ";
		try
		{
			arr[11];
			std::cout << "Sucess" << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << "exception" << std::endl;
		}
	}
	return (0);
}
