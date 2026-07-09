/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 09:56:53 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/09 13:46:51 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("Zer0");

	robot.attack("Handsome Jack");
	robot.takeDamage(5);
	robot.beRepaired(3);

	return (0);
}