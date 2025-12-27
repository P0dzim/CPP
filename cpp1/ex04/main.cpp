/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:38:31 by vitor             #+#    #+#             */
/*   Updated: 2025/12/27 09:33:20 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int	inFile(std::string& fileContent, char *filePath);
static void	filterStr(std::string& fileContent, const std::string s1, const std::string s2);
static int	outFile(const std::string& fileContent, std::string filePath);

int	main( int ac, char **av) {
	std::string	fileContent;

	if (ac != 4)
		return (1);
	if (!inFile(fileContent, av[1]))
		return (1);
	filterStr(fileContent, av[2], av[3]);
	if (!outFile(fileContent, av[1]))
		return (1);
	return (0);
}

static int	inFile(std::string& fileContent, char *filePath) {
	std::ifstream	file(filePath);
	std::string		line;

	if (!file.is_open())
	{
		std::cerr << "Can't read `" << filePath << "'" << std::endl;
		return (0);
	}
	while (true)
	{
		std::getline(file, line);
		fileContent.append(line);
		if (file.eof())
			break ;
		fileContent.append("\n");
	}
	file.close();
	return (1);
}

static void	filterStr(std::string& fileContent, const std::string s1, const std::string s2) {
	size_t	pos;

	pos = 0;
	while (true) 
	{
		pos = fileContent.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		fileContent.erase(pos, s1.length());
		fileContent.insert(pos, s2);
	}
}

static int	outFile(const std::string& fileContent, std::string filePath)
{
	std::ofstream file;

	filePath.append(".replace");
	file.open(filePath.c_str());
	if (!file.is_open())
	{
		std::cerr << "Can't write in `" << filePath << "'" << std::endl;
		return (0);
	}
	file << fileContent;
	file.close();
	return (1);
}
