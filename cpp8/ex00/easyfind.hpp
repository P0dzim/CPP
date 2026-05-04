/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:16:02 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 14:16:02 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator pos = std::find(container.begin(), container.end(), value);
	if (pos == container.end()) throw std::exception();
	return(pos);
}

template<typename T>
typename T::const_iterator easyfind(const T& container, int value)
{
	typename T::const_iterator pos = std::find(container.begin(), container.end(), value);
	if (pos == container.end()) throw std::exception();
	return(pos);
}
