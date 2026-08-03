/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:08:37 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/10 15:18:37 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (hitPoints == 0)
	{
    	std::cout << "FragTrap " << name << " cannot request a high five" << std::endl;
    	return ;
	}
	std::cout << name << " requests a high five!" << std::endl;
}

