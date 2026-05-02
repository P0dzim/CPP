/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:16:55 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/02 19:16:55 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>

Base*	genObj( void )
{
	int	num = std::rand() % 3;

	switch (num)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (new Base());
	}
}

char	identifier(Base *ptr)
{
	if (dynamic_cast<A *>(ptr))
		return ('A');
	if (dynamic_cast<B *>(ptr))
		return ('B');
	if (dynamic_cast<C *>(ptr))
		return ('C');
	return ('F');
}

int	main( void )
{
	std::srand(std::time(NULL));
	Base	*ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = genObj();
		std::cout << "TEST " << i + 1 << ": " << identifier(ptr) << std::endl;
		delete (ptr);
	}
	return (0);
}
