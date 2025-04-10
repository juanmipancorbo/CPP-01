/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:43:01 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/10 19:33:59 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


Harl::Harl(void) {}
Harl::~Harl(void) {}


void Harl::debug(void) { std::cout << "<Contextual information>" << std::endl; }
void Harl::info(void) { std::cout << "<Extensive information>" << std::endl; }
void Harl::warning(void) { std::cout << "<Potential issue in the system>" << std::endl; }
void Harl::error(void) { std::cout << "<An unrecoverable error has occurred>" << std::endl; }

void Harl::complain(std::string input)
{
	// Typedef for a pointer to a member function
	typedef void (Harl::*complain_ptr)(void);

	// Array of pointers to member functions
	complain_ptr function[4] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	// Array of strings to funcion/level names
	std::string level[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; ++i)
	{
		if (level[i] == input)
		{
			(this->*function[i])();
			return;
		}
	}
	// If any function/level name found
	std::cout << "Incorrect level, Harl does nothing." << std::endl;
}
