/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:45:42 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 11:45:42 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>

template<typename T>
MutantStack<T>::MutantStack( void ){}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack& base ): std::stack<T>(base) {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack& other ){
	if (this == &other) return (*this);
		std::stack<T>::operator=(other);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack( void ){}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin( void ) const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::rev_iterator MutantStack<T>::rbegin( void )
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_rev_iterator MutantStack<T>::rbegin( void ) const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end( void ) const
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::rev_iterator MutantStack<T>::rend( void )
{
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_rev_iterator MutantStack<T>::rend( void ) const
{
	return (this->c.rend());
}
