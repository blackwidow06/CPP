/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:55:20 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/05 14:39:02 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;

public:
	Dog();
	~Dog();
	Dog(const Dog &OTHER);
	Dog &operator=(const Dog &other);
	
	void makeSound() const;
	Brain *getBrain();
};

#endif