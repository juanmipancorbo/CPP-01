/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:30:24 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/26 19:48:04 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define 	ZOMBIE_HPP

# include	<iostream>
# include	<string>

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
		void	announce() const;
		void	set_name(std::string name);	
};

#endif	 // ZOMBIE_HPP