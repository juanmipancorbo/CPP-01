/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:20:21 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/08 23:33:20 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"
#include	<string>
#include	<iostream>


Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	std::cout << "Creating a zombie with newZombie (HEAP allocation):" << std::endl;
	Zombie* heapZombie = newZombie("BARTOLO");
	heapZombie->announce();
	delete heapZombie;	// Frees the memory allocated on the HEAP

	std::cout << "\nCreating a zombie with randomChump (STACK allocation):" << std::endl;
	randomChump("JUANCAR");

	return 0;
}