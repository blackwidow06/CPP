/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:00:29 by malavaud          #+#    #+#             */
/*   Updated: 2026/10/21 10:14:20 by malavaud         ###   ########.fr       */
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

void Brain::setIdea(int i, std::string idea)
{
	ideas[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;	
}

