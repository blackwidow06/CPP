/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:21:55 by malavaud          #+#    #+#             */
/*   Updated: 2026/11/17 14:33:50 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat bob("Bob", 35);
		Form contract("Contract", 50, 30);

		std::cout << bob << std::endl;
		std::cout << contract << std::endl;

		bob.signForm(contract);

		std::cout << contract << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat alice("Alice", 60);
		Form document("Document", 50, 30);

		alice.signForm(document);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

