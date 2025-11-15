/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:55:19 by dtanski           #+#    #+#             */
/*   Updated: 2025/11/15 16:11:57 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap& operator=(const FragTrap& src);

		void highFivesGuys(void);

	protected:
		static const unsigned int _initHitPoints = 100;
		static const unsigned int _initEnergyPoints = 100;
		static const unsigned int _initAttackDamage = 30;
};

#endif