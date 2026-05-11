/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:38:55 by vitosant          #+#    #+#             */
/*   Updated: 2026/05/04 17:04:34 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <map>
#include <string>
#include <ctime>

class	BitcoinExchange{
	private:
		std::map<std::time_t, long double> _data;
	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& base );
		BitcoinExchange&	operator=( const BitcoinExchange& other );
		~BitcoinExchange( void );

		void	addData( const std::string& key, const std::string& value );
		void	loadData( const std::string& data = "data.csv" );
		void	readInput( const char *inputFile ) const;
		void	findData( const std::string& line ) const;
		const std::map<std::time_t, long double>& getData( void ) const;
};

bool	checkDate( const std::string& date, std::time_t& time );
bool	checkValue( const std::string& value, long double& val, const bool& isLimited );
