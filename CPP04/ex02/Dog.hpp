/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:55:20 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/10 11:27:49 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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