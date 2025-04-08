/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:13:31 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/08 23:33:27 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"
#include	<string>


void	randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}