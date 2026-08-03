/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 09:56:53 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/10 15:16:46 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap frag("Marcus");
    frag.attack("Tiny Tina");
    frag.takeDamage(100);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return (0);
}
