/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:42:50 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 21:03:46 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main( void ) {
	
	const Animal* arr[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	
	std::cout << std::endl;
	for (int i = 0; i < 4; i++){
		std::cout << arr[i]->getType() << std::endl;
		arr[i]->makeSound();
	}
	std::cout << std::endl;
	for (int u = 0; u < 4; u++)
		delete (arr[u]);
	std::cout << std::endl;

	const WrongCat* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();
	
	std::cout << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;
	
	delete (k);
	delete (l);
	return (0);
}