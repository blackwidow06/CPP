/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:36:30 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/23 16:45:01 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string.h>

class PhoneBook
{
private:
	Contact contacts[8];
	int	count;
	int index;

	void displayChosenContact();

public:
	PhoneBook();

	void addContact();
	void searchContact();
};

#endif