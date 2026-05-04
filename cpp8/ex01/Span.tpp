/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:17:39 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 15:17:39 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

template<typename T>
void	Span::addNumberRange( T& begin, T& end )
{
	if (_len - _vec.size() < static_cast<std::size_t>(end - begin)) throw std::exception();
	_vec.insert(_vec.end(), begin, end);
}

template<typename T>
void	Span::addNumberRange( const T& begin, const T& end )
{
	if (_len - _vec.size() < static_cast<std::size_t>(end - begin)) throw std::exception();
	_vec.insert(_vec.end(), begin, end);
}
