/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:20:29 by malavaud          #+#    #+#             */
/*   Updated: 2026/10/22 09:08:46 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog dog1;
	dog1.getBrain()->getIdea(0) = "I want to play";

	Dog dog2(dog1);
	dog2.getBrain()->getIdea(0) = "I want to sleep";

	std::cout << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << dog2.getBrain()->getIdea(0) << std::endl;

	return (0);
}
