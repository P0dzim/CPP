/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:52:59 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 19:59:44 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class	GarbageCollector {
	private:
		void*	_ptr;
	public:
		GarbageCollector( void );
		GarbageCollector( void* ptr );
		GarbageCollector( const GarbageCollector& base );
		GarbageCollector& operator=( const GarbageCollector& other );
		~GarbageCollector( void );
};
