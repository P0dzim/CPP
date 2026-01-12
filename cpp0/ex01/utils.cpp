/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:42:16 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/07 11:42:21 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool onlyDigits(const std::string& s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (false);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

void trimStr(std::string& src)
{
	const std::string&	blank = "\t\n\v\f\r ";
	int					start = 0;
	int					end = 0;
	int					len;

	if (src.empty())
		return ;
	start = src.find_first_not_of(blank);
	end = src.find_last_not_of(blank);
	len = end - start + 1;
	if (start < 0 || end < 0)
		src.clear();
	else
		src.assign(src.substr(start, len));
}
