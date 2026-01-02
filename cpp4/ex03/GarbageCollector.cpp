/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:56:12 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 20:01:24 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GarbageCollector.hpp"

GarbageCollector::GarbageCollector( void ) {
	_ptr = 0;
}

GarbageCollector::GarbageCollector( void* ptr ) {
	_ptr = ptr;
}

GarbageCollector::GarbageCollector( const GarbageCollector& base ) {}

GarbageCollector::~GarbageCollector( void ) {
	if (_ptr)
		delete (_ptr);
}

GarbageCollector& GarbageCollector::operator=( const GarbageCollector& other ) {
	return (*this);
}