/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 09:56:53 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/09 16:46:42 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap robot("Zer0");

    robot.attack("Handsome Jack");
    robot.takeDamage(5);
    robot.beRepaired(3);
	
    ScavTrap scav("Lilith");
	
    scav.attack("General Knoxx");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    return (0);
}