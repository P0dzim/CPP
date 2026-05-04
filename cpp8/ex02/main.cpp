/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:40:47 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 10:40:47 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>

template<typename T>
void printStack(MutantStack<T>& m, std::string str)
{
	typename MutantStack<T>::iterator it = m.begin();
	typename MutantStack<T>::iterator end = m.end();

	std::cout << str << std::endl;
	while (it != end)
	{
		std::cout << *it << ' ';
		it++;
	}
	std::cout << std::endl;
}

template<typename T>
void printStack(const MutantStack<T>& m, std::string str)
{
	typename MutantStack<T>::const_iterator it = m.begin();
	typename MutantStack<T>::const_iterator end = m.end();

	std::cout << str << std::endl;
	while (it != end)
	{
		std::cout << *it << ' ';
		it++;
	}
	std::cout << std::endl;
}

template<typename T>
void prinRevtStack(MutantStack<T>& m, std::string str)
{
	typename MutantStack<T>::rev_iterator it = m.rbegin();
	typename MutantStack<T>::rev_iterator end = m.rend();

	std::cout << str << std::endl;
	while (it != end)
	{
		std::cout << *it << ' ';
		it++;
	}
	std::cout << std::endl;
}

template<typename T>
void printRevStack(const MutantStack<T>& m, std::string str)
{
	typename MutantStack<T>::const_rev_iterator it = m.rbegin();
	typename MutantStack<T>::const_rev_iterator end = m.rend();

	std::cout << str << std::endl;
	while (it != end)
	{
		std::cout << *it << ' ';
		it++;
	}
	std::cout << std::endl;
}

int main()
{
	{
		std::cout << "============"
			<< "PDF TESTS"
			<< "============" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		MutantStack<int> assigned;
    	assigned.push(999);
     	assigned = mstack;
	}
	{
		std::cout << "============"
			<< "DEEP COPY TESTS"
			<< "============" << std::endl;

		MutantStack<int> mstack;
		for (int i = 0; i < 10; i++)
			mstack.push(i);

		MutantStack<int> assigned = mstack;
		MutantStack<int> cpy(mstack);

		cpy.pop();
		cpy.pop();
		assigned.pop();
		printStack(mstack, "ORIGINAL STACK:");
		printStack(assigned, "ASSIGNED STACK:");
		printStack(cpy, "COPY STACK:");
	}
	{
		std::cout << "============"
			<< "ITERATOR TESTS"
			<< "============" << std::endl;

		MutantStack<int> mstack;
		for (int i = 0; i < 10; i++)
			mstack.push(i);
		const MutantStack<int> const_stack(mstack);

		printStack(mstack, "ORIGINAL STACK ITERATOR:");
		printStack(const_stack, "CONST STACK ITERATOR:");
		printRevStack(mstack, "ORIGINAL STACK REV ITERATOR:");
		printRevStack(mstack, "CONST STACK REV ITERATOR:");
	}
	return (0);
}
