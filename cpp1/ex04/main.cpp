/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:38:31 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 20:14:41 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>

int	main( int ac, char **av) {
	if (ac != 4)
	{
		std::cerr << ac;
		return (1);
	}
	std::ifstream		inFile(av[1]);
	std::string			outPut = av[1];
	std::string			str, completeFile;
	const std::string	filter = av[2], replace = av[3];
	size_t				i;
	
	outPut.append(".replace");
	std::ofstream outFile(outPut.c_str());
	while (std::getline(inFile, str))
		completeFile.append(str + '\n');
	while (true) 
	{
		i = completeFile.find(filter);
		if (i == std::string::npos)
			break ;
		for (int j = 0; j < replace.length(); j++)
			completeFile[i + j] = replace[j];
	}
	outFile << completeFile;
	inFile.close();
	outFile.close();
	return (0);
}