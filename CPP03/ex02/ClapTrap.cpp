/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 09:57:21 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/09 11:47:55 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
		return ;
	std::cout << "ClapTrap " << name << " took " << amount << " damage!" << std::endl;
	if (amount >= (unsigned int)hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " repaired itself by " << amount << "HP!" << std::endl;
	hitPoints += amount;
	energyPoints--;
}
