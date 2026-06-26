/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 11:58:55 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/26 15:01:32 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* horde = zombieHorde(5, "Dustin");

	int i;
	i = 0;
	while (i < 5)
	{
		horde[i].annonce();
		i++;
	}
	delete[] horde;
	return (0);
}