/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:36:34 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/19 18:16:11 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    count = 0;
    index = 0;
}

void PhoneBook::addContact()
{
    contacts[index].setInfos();

    index = (index + 1) % 8;

    if (count < 8)
        count++;
}

