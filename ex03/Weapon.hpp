/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:08:04 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/08 23:38:04 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
#define		WEAPON_HPP

#include	<string>


class Weapon 
{
	private:
		std::string	_type;

	public:
		Weapon(const std::string &type);
		~Weapon();

		const	std::string &getType() const;
		void	setType(const std::string &type);
};


#endif // WEAPON_HPP