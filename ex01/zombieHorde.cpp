/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:32:08 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/26 20:55:22 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << (i + 1);
		horde[i].set_name(name + "_" + oss.str());
	}
	
	return horde;
}