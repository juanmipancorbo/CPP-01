/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:30:52 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/08 23:32:59 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"
#include	<string>
#include	<iostream>


	// Default constructor
Zombie::Zombie() : _name("Unnamed Zombie") {}

	// Name Constructor
Zombie::Zombie(const std::string &name) : _name(name) {}

	// Destructor
Zombie::~Zombie() { std::cout << _name << " is destroyed." << std::endl; }


	// Other Methods
void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) { _name = name; }