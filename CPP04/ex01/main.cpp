/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:20:29 by malavaud          #+#    #+#             */
/*   Updated: 2026/10/21 10:15:53 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << dog->getType() << ": ";
	dog->makeSound();

	std::cout << cat->getType() << ": ";
	cat->makeSound();

	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << "========== DEEP COPY ==========" << std::endl;

	Dog dog1;
	dog1.getBrain()->getIdea(0) = "I want to eat";

	Dog dog2(dog1);
	dog2.getBrain()->getIdea(0) = "I want to play";

	std::cout << "Dog 1: ";
	std::cout << dog1.getBrain()->getIdea(0) << std::endl;

	std::cout << "Dog 2: ";
	std::cout << dog2.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;

	Cat cat1;
	cat1.getBrain()->getIdea(0) = "I want fish";

	Cat cat2(cat1);
	cat2.getBrain()->getIdea(0) = "I want to sleep";

	std::cout << "Cat 1: ";
	std::cout << cat1.getBrain()->getIdea(0) << std::endl;

	std::cout << "Cat 2: ";
	std::cout << cat2.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "========== OPERATOR = ==========" << std::endl;

	Dog dog3;
	dog3 = dog1;

	Cat cat3;
	cat3 = cat1;

	std::cout << "Dog 3: ";
	std::cout << dog3.getBrain()->getIdea(0) << std::endl;

	std::cout << "Cat 3: ";
	std::cout << cat3.getBrain()->getIdea(0) << std::endl;

	return (0);
}

