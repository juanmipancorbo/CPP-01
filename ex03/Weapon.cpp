/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:39:32 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/10 17:48:26 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(const std::string &type) : _type(type) {}
Weapon::~Weapon() {}

const	std::string &Weapon::getType() const		{ return _type; }
void	Weapon::setType(const std::string &type)	{ _type = type; }