/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:51:41 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/09 16:37:19 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void ScavTrap::guardGate(void)
{
	std::cout << name << " is now in gate keeper mode" << std::endl;
}