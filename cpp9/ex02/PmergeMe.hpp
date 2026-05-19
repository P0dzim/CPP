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

#include <algorithm>
#include <list>
#include <vector>

typedef struct	s_lst_node
{
	long						num;
	std::list<s_lst_node>		losers;
}	t_lst_node;

typedef struct	s_vec_node
{
	long						num;
	std::vector<s_vec_node>		losers;
}	t_vec_node;


class PmergeMe
{
	private:
		PmergeMe( void );
		PmergeMe( const PmergeMe& base );
		PmergeMe& operator=( const PmergeMe& other );
		~PmergeMe( void );

	public:
		static void makeContainers( std::vector<t_vec_node> &vec );
};

std::vector<long>	jacobsthal_sequence( std::size_t len );
std::vector<long>	make_idx_sequence( std::size_t len );

template<typename T>
void	unpack_chain( T& chain, T& main_chain, T& sec_chain )
{
	for (std::size_t i = 0; i < chain.size(); i++)
	{
		main_chain.push_back(chain[i]);
		sec_chain.push_back(chain[i].losers.back());
		main_chain.back().losers.pop_back();
	}
}

template<typename T>
bool	compare_nodes( const T& a, const T& b )
{
	return (a.num < b.num);
}

template<typename T>
T new_sequence( std::vector<long>& index_sequence, T& winners, T& losers )
{
	T	ret(winners);
	if (!losers.empty())
		ret.insert(ret.begin(), losers[0]);

	for (std::size_t i = 0; i < index_sequence.size(); i++)
	{
		long		index = index_sequence[i];
		t_vec_node	insert_node = losers[index];

		typename T::iterator	pos = std::lower_bound(ret.begin(), ret.begin() + index, insert_node, compare_nodes<typename T::value_type>);
		ret.insert(pos, insert_node);
	}
	return (ret);
}

template<typename Container>
void	mergeInsertionSort( Container& cont )
{
	Container						chain;
	typename Container::iterator	iter = cont.begin();

	typename Container::value_type	num1, num2;
	bool							has_odd = false;
	while (iter != cont.end())
	{
		num1 = *iter;
		iter++;
		if (iter == cont.end())
		{
			has_odd = true;
			break ;
		}
		num2 = *iter;
		iter++;

		if (num1.num > num2.num)
		{
			num1.losers.push_back(num2);
			chain.push_back(num1);
		}
		else
		{
			num2.losers.push_back(num1);
			chain.push_back(num2);
		}
	}
	if (chain.size() > 1)
		mergeInsertionSort(chain);

	Container	winners;
	Container	losers;
	unpack_chain(chain, winners, losers);
	if (has_odd)
		losers.push_back(num1);

	std::vector<long> index_sequence = make_idx_sequence(losers.size());
	cont = new_sequence(index_sequence, winners, losers);
}
