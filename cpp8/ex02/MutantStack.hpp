/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:43:32 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 10:43:32 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev_iterator;

		MutantStack( void );
		MutantStack( const MutantStack& base );
		MutantStack& operator=( const MutantStack& other );
		~MutantStack( void );

		iterator			begin( void );
		const_iterator		begin( void ) const;
		rev_iterator		rbegin( void );
		const_rev_iterator	rbegin( void ) const;

		iterator			end( void );
		const_iterator		end( void ) const;
		rev_iterator		rend( void );
		const_rev_iterator	rend( void ) const;
};

#include "MutantStack.tpp"
