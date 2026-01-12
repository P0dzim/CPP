/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:41:38 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 11:41:42 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
	private:
		Contact	_contacts[MAX_CONTACTS];
		int		_index;
		int		_size;
	public:
		PhoneBook();
		~PhoneBook();
		int 		getIndex() const;
		int 		getSize() const;
		void		setIndex(int i);
		void 		setSize(int i);
		void		addContact(void);
		Contact&	getContact(int index);
		void		showList(void) const;
};
