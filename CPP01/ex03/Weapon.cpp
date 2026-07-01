/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:31:16 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/29 11:26:02 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	type = weaponType;
}

std::string Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string weaponType)
{
	type = weaponType;
}
