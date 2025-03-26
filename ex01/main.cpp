/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:16:02 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/26 21:18:54 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <string>
#include <cctype>

bool is_all_spaces(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isspace(static_cast<unsigned char>(str[i])))
			return false;
	}
	return true;
}

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	std::string	nbr_str;
	std::string input_name;

	std::cout <<	"Let's create a horde of zombies!\n"
					"How many zombies would you like to create?: " << std::endl;

	std::getline(std::cin, nbr_str);
	size_t nbr_int = std::atoi(nbr_str.c_str());
	while (nbr_int < 1)
	{
		std::cout << "We need more than 0...\nTry again" << std::endl;
		std::getline(std::cin, nbr_str);
		nbr_int = std::atoi(nbr_str.c_str());
	}

	std::cout <<	"Write a name for your hungry bastards: " << std::endl;
	std::getline(std::cin, input_name);
	while (input_name.empty())
	{
		std::cout << "We need a name for best performance...\nTry again" << std::endl;
		std::getline(std::cin, input_name);
	}
	if (is_all_spaces(input_name)) { input_name = "SpaceNastyBoy"; }

	Zombie* horde = zombieHorde( nbr_int, input_name );

	for (size_t i = 0; i < nbr_int; i++)
		horde[i].announce();
		
	delete []horde;
}