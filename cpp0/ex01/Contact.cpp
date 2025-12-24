/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:55:55 by vitosant          #+#    #+#             */
/*   Updated: 2025/12/24 18:45:37 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::Contact(const std::string& fname, const std::string& lname, const std::string& nick, const std::string& phoneNum, const std::string& secret) {
	_fname = fname;
	_lname = lname;
	_nick = nick;
	_phoneNum = phoneNum;
	_secret = secret;
}

Contact::~Contact() {}

const std::string& Contact::getFname() const {
	return (_fname);
}

void Contact::setFname(const std::string& fname) {
	_fname = fname;
}

const std::string& Contact::getLname() const {
	return (_lname);
}

void Contact::setLname(const std::string& lname) {
	_lname = lname;
}

const std::string& Contact::getNick() const {
	return (_nick);
}

void Contact::setNick(const std::string& nick) {
	_nick = nick;
}

const std::string& Contact::getPhoneNum() const {
	return (_phoneNum);
}

void Contact::setPhoneNum(const std::string& phoneNum) {
	_phoneNum = phoneNum;
}

const std::string& Contact::getSecret() const {
	return (_secret);
}

void Contact::setSecret(const std::string& secret) {
	_secret = secret;
}

void Contact::showContact(void) const {
	std::cout << std::endl << "==================================" << std::endl;
	std::cout << _fname << std::endl;
	std::cout << _lname << std::endl;
	std::cout << _nick << std::endl;
	std::cout << _phoneNum << std::endl;
	std::cout <<  _secret << std::endl;
	std::cout << "==================================" << std::endl;
}