/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:42:50 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 13:13:58 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main( void ) {
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete (i);
	delete (j);
	delete (meta);
	std::cout << std::endl;

	const WrongCat* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	l->makeSound();
	delete (k);
	delete (l);
	return (0);
}