/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:20:29 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/10 12:11:04 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();

	std::cout << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;

	return (0);
}

//int main(void)
//{
//	Dog dog;
//	Cat cat;

//	AAnimal &animal1 = dog;
//	AAnimal &animal2 = cat;

//	animal1.makeSound();
//	animal2.makeSound();

//	return (0);
//}

//int main(void)
//{
//	AAnimal animal;
//	return (0);
//}