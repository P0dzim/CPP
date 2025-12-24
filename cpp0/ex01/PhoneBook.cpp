/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:32:59 by vitor             #+#    #+#             */
/*   Updated: 2025/12/24 18:43:48 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>
#include <string>

static std::string trucater(std::string field);
static std::string getInput(const std::string& field);
static int selectContact(int size);

PhoneBook::PhoneBook() {
	_index = -1;
	_size = 0;
}

PhoneBook::~PhoneBook() {}

int PhoneBook::getIndex() const {
	return (_index);
}

int PhoneBook::getSize() const {
	return (_size);
}

void PhoneBook::setIndex(int i) {
	_index = i;
}

void PhoneBook::setSize(int i) {
	_size = i;
}

void PhoneBook::addContact(void) {
	int			index;
	std::string	input;

	std::cin.ignore(); 
	index = (_index + 1) % MAX_CONTACTS;
	input = getInput("NAME");
	_contacts[index].setFname(input);
	input = getInput("LAST NAME");
	_contacts[index].setLname(input);
	input = getInput("NICKNAME");
	_contacts[index].setNick(input);
	input = getInput("NUMBER");
	_contacts[index].setPhoneNum(input);
	input = getInput("DARK SECRET");
	_contacts[index].setSecret(input);
	setIndex(index);
	if (getSize() < MAX_CONTACTS)
		setSize(getSize() + 1);
}

void PhoneBook::showList(void) const {
	int	index;

	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname"  << std::endl;
	for (int i = 0; i < _size; i++)
	{
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::setw(10) << trucater(_contacts[i].getFname());
		std::cout << "|";
		std::cout << std::setw(10) << trucater(_contacts[i].getLname());
		std::cout << "|";
		std::cout << std::setw(10) << trucater(_contacts[i].getNick());
		std::cout << std::endl;
	}
	index = selectContact(_size);
	_contacts[index].showContact();
}

static std::string trucater(std::string field)
{
	std::string	ret;

	if (field.length() <= 10)
		return (field);
	ret = field.substr(0, 10);
	ret.replace(9, 1, ".");
	return (ret);
}

static int selectContact(int size) {
	std::string	param;
	int			index;

	while (true)
	{
		std::cout << "Select contact (index): ";
		std::cin >> param;
		if (param.length() == 1 && onlyDigits(param))
		{
			index = param.at(0) - '0';
			if (index < size)
				break ;
		}
		std::cerr << "Write a valid index" << std::endl;
	}
	return (index);
}

static std::string getInput(const std::string& field) {
	std::string	input;

	while (true)
	{
		std::cout << field << ": ";
		std::getline(std::cin, input);
		trimStr(input);
		if (input.empty())
			std::cerr << "Empty fields are forbidden" << std::endl;
		else
			break ;
	}
	return (input);
}