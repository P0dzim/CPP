/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:40:25 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 11:40:47 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Contact {
	private:
		std::string _fname;
		std::string _lname;
		std::string _nick;
		std::string _phoneNum;
		std::string _secret;
	public:
		Contact ();
		Contact (const std::string& fname, const std::string& lname, const std::string& nick, const std::string& phoneNum, const std::string& secret);
		~Contact();
		const std::string& getFname() const;
		void setFname(const std::string& fname);
		const std::string& getLname() const;
		void setLname(const std::string& fname);
		const std::string& getNick() const;
		void setNick(const std::string& fname);
		const std::string& getPhoneNum() const;
		void setPhoneNum(const std::string& fname);
		const std::string& getSecret() const;
		void setSecret(const std::string& fname);
		void showContact(void) const;
};
