/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:00:50 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 18:00:54 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string	str		= "HI THIS IS BRAIN";
	std::string& strREF	= str;
	std::string* strPTR	= &str;

	std::cout << "             ADDRESSES            " << std::endl 
		<< "==================================" << std::endl;
	std::cout << "String VAR address: " << &str << std::endl;
	std::cout << "String REF address: " << &strREF << std::endl;
	std::cout << "String PTR address: " << strPTR << std::endl;
	std::cout << "==================================" << std::endl << std::endl;
	std::cout << "              CONTENT             " << std::endl 
		<< "====================================" << std::endl;
	std::cout << "String VAR content: " << str << std::endl;
	std::cout << "String REF content: " << strREF << std::endl;
	std::cout << "String PTR content: " << *strPTR << std::endl;
	std::cout << "====================================" << std::endl;

}
