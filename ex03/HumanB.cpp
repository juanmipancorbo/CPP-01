/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:05:57 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/08 23:53:58 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanB.hpp"
#include	<iostream>


HumanB::HumanB(const std::string &name)
	: _name(name), _weapon(NULL) {}
	
HumanB::~HumanB() {}


void	HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }
void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon." << std::endl;
}