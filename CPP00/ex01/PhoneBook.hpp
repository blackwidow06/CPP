/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:36:30 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/19 18:15:58 by malavaud         ###   ########.fr       */
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

public:
	PhoneBook();

	void addContact();
};

#endif