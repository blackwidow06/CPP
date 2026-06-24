/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:36:34 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/23 17:02:22 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
	count = 0;
	index = 0;
}

static std::string resize(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";

	return (str);
}

void PhoneBook::addContact()
{
	contacts[index].setInfos();

	index = (index + 1) % 8;

	if (count < 8)
		count++;
}

void PhoneBook::searchContact()
{
	if (count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	int i = 0;
	while (i < count)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10)
				  << resize(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10)
				  << resize(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10)
				  << resize(contacts[i].getNickname()) << std::endl;

		i++;
	}
	displayChosenContact();
}

void PhoneBook::displayChosenContact()
{
    std::string input;
    int choice;

    std::cout << "Index: ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Invalid index" << std::endl;
        return;
	}
	
    size_t i = 0;
    while (i < input.length())
    {
        if (!std::isdigit(input[i]))
        {
            std::cout << "Invalid index" << std::endl;
            return;
        }
        i++;
    }
	
    choice = std::atoi(input.c_str());
    if (choice >= 0 && choice < count)
        contacts[choice].printInfos();
    else
        std::cout << "Invalid index" << std::endl;
}
