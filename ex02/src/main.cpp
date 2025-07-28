/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:09:43 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/18 21:03:13 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
	std::cout << "Testing ClapTrap" << std::endl;
	ClapTrap frodo = ClapTrap("Frodo");
	frodo.attack("Smeagol");
	frodo.takeDamage(2);
	frodo.beRepaired(3);

	std::cout << "Testing ScavTrap" << std::endl;
	ScavTrap dwarf = ScavTrap("Gimli");
	dwarf.attack("Orc");
	dwarf.takeDamage(30);
	dwarf.takeDamage(30);
	dwarf.beRepaired(20);
	dwarf.guardGate();

	std::cout << "Testing FragTrap" << std::endl;
	FragTrap aragorn = FragTrap("Aragorn");
	aragorn.attack("Orc");
	aragorn.takeDamage(20);
	aragorn.beRepaired(11);
	aragorn.highFivesGuys();


}