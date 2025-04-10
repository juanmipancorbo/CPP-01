/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:45:45 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/10 17:47:50 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>


class HumanA
{
	private:
		std::string		_name;
		Weapon			&_weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();

	void	attack() const;
};

#endif // HUMANA_HPP