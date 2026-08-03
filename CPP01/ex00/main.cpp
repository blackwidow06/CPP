/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:33:53 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/03 11:20:35 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie = newZombie("Kylian");
	zombie->annonce();
	
	randomChump("Ousmane");
	
	delete zombie;
	
	return (0);
}