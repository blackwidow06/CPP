/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:00:29 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/05 14:47:25 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constrctor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	int	i = 0;

	while (i < 100)
	{
		ideas[i]= other.ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		int	i = 0;
		while (i < 100)
		{
			ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}

std::string &Brain::getIdea(int index)
{
	return (ideas[index]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;	
}

