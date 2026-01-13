/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:32:21 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/13 10:47:32 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main() 
{
	{
		std::cout << "===T0: BASIC TESTS FROM SUBJECT===" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete (bob);
		delete (me);
		delete (src);
	}
	std::cout << std::endl << "===T1: COPY CONSTRUCTOR TESTS===" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("Ofelia");
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("cure"));
		ICharacter* you = new Character(* (Character *) me);
		
		delete (src);
		delete (me);
		delete (you);
	}
	std::cout << std::endl << "===T2: ASSIGNMENT OPERATOR TESTS===" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("Ofelia");
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("cure"));
		Character you = * (Character *) me;

		you.use( 1, *me);
		delete (src);
		delete (me);
	}
	std::cout << std::endl << "===T3: MATERIALSOURCES TESTS===" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());

		Ice *noFreeSlot = new Ice;
		src->learnMateria(noFreeSlot);
		delete (noFreeSlot);

		void *invalid_m = src->createMateria("NoN");
		(void) invalid_m;
	
		delete (src);
	}
	std::cout << std::endl << "===T4: INVENTORY TESTS===" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter	*me = new Character("Alice");
		Character	p2("Cordelia");
		AMateria	*tmp;
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		AMateria *tmp2 = src->createMateria("ice");
		me->equip(tmp2);


		me->unequip(3);
		me->unequip(-2);
		me->unequip(4);
		me->unequip(5);

		me->use(-1, p2);
		me->use(0, p2);
		me->use(1, p2);
		me->use(2, p2);
		me->use(3, p2);
		me->use(4, p2);
		me->use(5, p2);

		me->equip(0);

		delete (me);
		delete (tmp);
		delete (tmp2);
		delete (src);
	}
	return (0);
}
