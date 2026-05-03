/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 11:00:09 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/03 11:09:06 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>

template<typename T>
Array<T>::Array( void ) : arr(NULL), len(0) {}

template<typename T>
Array<T>::Array( const unsigned int& n ) : len(n) {
	arr = new T[n]();
	if (!arr) throw std::exception();
}

template<typename T>
Array<T>::Array( const Array<T>& base ) : len(base.len) {
	arr = new T[base.len]();
	if (!arr) throw std::exception();
	for (std::size_t i = 0; i < base.len; i++)
		arr[i] = base.arr[i];
}

template<typename T>
Array<T>& Array<T>::operator=( const Array<T>& other ) {
	if (this == &other)
		return (*this);
	if (arr) delete[](arr);
	len = other.len;
	arr = new T[other.len]();
	if (!arr) throw std::exception();

	for (std::size_t i = 0; i < other.len; i++)
		arr[i] = other.arr[i];
	return (*this);
}

template<typename T>
Array<T>::~Array( void ) {
	if (arr) delete[] (arr);
}

template<typename T>
T& Array<T>::operator[]( const unsigned int i ) {
	if (i >= len) throw std::exception();
    return(arr[i]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const {
	if (i >= len) throw std::exception();
	return (arr[i]);
}

template<typename T>
const std::size_t& Array<T>::size( void ) const {
	return (len);
}
