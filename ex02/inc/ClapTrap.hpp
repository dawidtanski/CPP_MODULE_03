/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:23:37 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/18 18:32:29 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attack_dmg;

	public:
		// Constructors
		ClapTrap(std::string _name);
		ClapTrap();
		~ClapTrap();
		// Copy constructor
		ClapTrap(const ClapTrap &src);
		// Copy assignment operator
		ClapTrap& operator=(const ClapTrap& src);
		// Methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif