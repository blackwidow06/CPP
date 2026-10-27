/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:33:53 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/13 14:17:01 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie = newZombie("Leo");
	zombie->annonce();
	
	randomChump("Dustin");
	
	delete zombie;
	
	return (0);
}