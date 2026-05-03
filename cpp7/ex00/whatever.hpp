/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:07:50 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 10:07:50 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T& a, T&b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T min(T a, T b)
{
	T arr[2] = {a, b};
	return(arr[a >= b]);
}

template<typename T>
T max(T a, T b)
{
	T arr[2] = {a, b};
	return(arr[a <= b]);
}
