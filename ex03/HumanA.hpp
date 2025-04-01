/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:45:45 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/01 20:58:12 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANA_HPP
# define	HUMANA_HPP

# include	"Weapon.hpp"
# include	<iostream>


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