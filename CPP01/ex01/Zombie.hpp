/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 11:59:06 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/26 15:00:32 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	~Zombie();

	void annonce();
	void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
