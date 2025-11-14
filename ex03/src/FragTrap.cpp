/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:55:29 by dtanski           #+#    #+#             */
/*   Updated: 2025/11/14 16:47:08 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << _name << " constructed!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap():ClapTrap()
{
	std::cout << "FragTrap default constructed!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attack_dmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap " << _name << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five! Have a nice day!" <<std::endl;
}