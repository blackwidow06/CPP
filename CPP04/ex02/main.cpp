/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:20:29 by malavaud          #+#    #+#             */
/*   Updated: 2026/10/19 09:22:20 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AAnimal.hpp"
//#include "Dog.hpp"
//#include "Cat.hpp"

//int main(void)
//{
//	const AAnimal *dog = new Dog();
//	const AAnimal *cat = new Cat();

//	std::cout << std::endl;
//	std::cout << dog->getType() << std::endl;
//	std::cout << cat->getType() << std::endl;

//	dog->makeSound();
//	cat->makeSound();

//	std::cout << std::endl;
//	delete dog;
//	delete cat;

//	return (0);
//}

#include "Dog.hpp"
#include <iostream>

int main()
{
	Dog dog1;
	dog1.getBrain()->ideas[0] = "I want to play";

	Dog dog2(dog1);
	dog2.getBrain()->ideas[0] = "I want to sleep";

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;

	return 0;
}