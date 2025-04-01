/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:59:12 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/01 21:06:25 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANB_HPP
# define	HUMANB_HPP

# include	"Weapon.hpp"
# include	<iostream>


class HumanB
{
	private:
		std::string		_name;
		Weapon			*_weapon;

	public:
		HumanB(const std::string &name);
		~HumanB();

		void	setWeapon(Weapon &weapon);
		void	attack() const;
};

#endif // HUMANB_HPP