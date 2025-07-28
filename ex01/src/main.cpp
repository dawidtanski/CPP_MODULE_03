/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:09:43 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/18 18:28:23 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

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

}