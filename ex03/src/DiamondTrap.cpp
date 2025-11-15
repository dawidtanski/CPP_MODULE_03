/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:09:01 by dtanski           #+#    #+#             */
/*   Updated: 2025/11/15 16:11:57 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hitPoints = FragTrap::_initHitPoints;      // FragTrap value (100)
	_energyPoints = ScavTrap::_initEnergyPoints; // ScavTrap value (50)
	_attack_dmg = FragTrap::_initAttackDamage;   // FragTrap value (30)
	std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(){
	_hitPoints = FragTrap::_initHitPoints;      // FragTrap value (100)
	_energyPoints = ScavTrap::_initEnergyPoints; // ScavTrap value (50)
	_attack_dmg = FragTrap::_initAttackDamage;   // FragTrap value (30)
	std::cout << "DiamondTrap default constructed!" << std::endl;
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << _name << std::endl; 
	std::cout << "My ClapTrap name is: " << ClapTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	_hitPoints = FragTrap::_initHitPoints;      // FragTrap value (100)
	_energyPoints = ScavTrap::_initEnergyPoints; // ScavTrap value (50)
	_attack_dmg = FragTrap::_initAttackDamage;   // FragTrap value (30)
	std::cout << "DiamondTrap " << _name << " copy constructed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this != &src)
	{
		_name = src._name;
		ClapTrap::operator=(src);
		ScavTrap::operator=(src);
	}
	return (*this);
}