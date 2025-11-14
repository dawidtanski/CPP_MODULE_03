/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:09:01 by dtanski           #+#    #+#             */
/*   Updated: 2025/11/14 20:30:36 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap default constructed!" << std::endl;
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamontTrap" << _name << "destroyed!" << std::endl;
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

DiamondTrap::DiamondTrap(const DiamondTrap &src): _name(src._name)
{
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