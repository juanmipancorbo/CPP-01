/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:29:34 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/10 17:45:24 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>


class Zombie
{
	private:
		std::string _name;

	public:
			// Constructors
		Zombie();
		Zombie(const std::string &name);

			// Destructor
		~Zombie();	

			// Other Methods
		void		announce() const;
};

#endif	 // ZOMBIE_HPP