/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:55:13 by vitor             #+#    #+#             */
/*   Updated: 2025/12/24 18:10:10 by vitor            ###   ########.fr       */
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