/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 09:49:06 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/16 09:49:06 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
class PmergeMe
{
	private:
		PmergeMe( void );
		PmergeMe( const PmergeMe& base );
		PmergeMe& operator=( const PmergeMe& other );
		~PmergeMe( void );

	public:
		static void merge_sort( std::vector<long>& arr );
};
