/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:30:34 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 18:42:37 by vitor            ###   ########.fr       */
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
