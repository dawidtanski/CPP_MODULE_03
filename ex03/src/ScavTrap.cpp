/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:56:03 by dtanski           #+#    #+#             */
/*   Updated: 2025/11/15 16:11:58 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
	_hitPoints = _initHitPoints;
	_energyPoints = _initEnergyPoints;
	_attack_dmg = _initAttackDamage;

}


ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructed!" << std::endl;
	_hitPoints = _initHitPoints;
	_energyPoints = _initEnergyPoints;
	_attack_dmg = _initAttackDamage;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap " << _name << " copy constructed!" << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if (this != &src)
	{
		// Slicing
		ClapTrap::operator=(src);
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and can't attack!" << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}