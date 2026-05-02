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
#include <exception>
#include <iostream>

Base*	generate( void )
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

void	identify(Base *ptr)
{
	if (dynamic_cast<A *>(ptr))
		std::cout << 'A';
	if (dynamic_cast<B *>(ptr))
		std::cout << 'B';
	if (dynamic_cast<C *>(ptr))
		std::cout << 'C';
}

void	identify(Base &ptr)
{
	try
	{
		A& a = dynamic_cast<A&>(ptr);
		(void) a;
		std::cout << 'A' << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		B& b = dynamic_cast<B&>(ptr);
		(void) b;
		std::cout << 'B' << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		C& c = dynamic_cast<C&>(ptr);
		(void) c;
		std::cout << 'C' << std::endl;
	}
	catch(std::exception& e) {}
}

int	main( void )
{
	std::srand(std::time(NULL));
	Base	*ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = generate();
		Base&	ref = *ptr;

		std::cout << "TEST " << i + 1 << ": " << "ptr ";
		identify(ptr);
		std::cout << " ref ";
		identify(ref);
		delete (ptr);
	}
	return (0);
}
