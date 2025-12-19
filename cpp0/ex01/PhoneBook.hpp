/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:41:16 by vitosant          #+#    #+#             */
/*   Updated: 2025/12/17 14:21:06 by vitosant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	_contacts[8];
		int		_index;
	public:
		PhoneBook();
		~PhoneBook();
};
