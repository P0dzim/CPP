/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:20:37 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 10:20:37 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <iostream>

template<typename T, typename F>
void	iter(T* addr, const std::size_t len, F func)
{
	for (std::size_t i = 0; i < len; i++)
		func(addr[i]);
}

template<typename T, typename F>
void	iter(const T* addr, const std::size_t len, F func)
{
	for (std::size_t i = 0; i < len; i++)
		func(addr[i]);
}

template<typename T>
void	printArr(T arr, const std::size_t len)
{
	for (std::size_t i = 0; i < len; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}
