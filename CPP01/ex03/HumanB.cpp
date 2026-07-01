/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:32:19 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/29 14:05:58 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName)
{
	name = humanName;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon& humanWeapon)
{
	weapon = &humanWeapon;
}

void HumanB::attack()
{
	if (weapon)
	{
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
}