/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:29:45 by dtanski           #+#    #+#             */
/*   Updated: 2025/11/15 16:11:57 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &src);
		ScavTrap& operator=(const ScavTrap& src);

		void attack(const std::string& target);
		void guardGate();

	protected:
		static const unsigned int _initHitPoints = 100;
		static const unsigned int _initEnergyPoints = 50;
		static const unsigned int _initAttackDamage = 20;
};


#endif