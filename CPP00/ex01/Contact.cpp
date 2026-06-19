/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:36:40 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/19 18:11:31 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setInfos()
{
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);

	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);

	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

void	Contact::printInfos() const
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

std::string Contact::getFirstName() const
{
	return (first_name);
}

std::string Contact::getLastName() const
{
	return (last_name);
}

std::string Contact::getNickname() const
{
	return (nickname);
}