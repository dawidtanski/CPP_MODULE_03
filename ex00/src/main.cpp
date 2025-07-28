/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:09:43 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/16 19:21:21 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap frodo = ClapTrap("Frodo");

	frodo.attack("Smeagol");
	frodo.takeDamage(2);
	frodo.beRepaired(3);
}