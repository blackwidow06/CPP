/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 15:03:07 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/26 15:52:33 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string;
	std::string *stringPTR;

	string =  "HI THIS IS BRAIN";
	stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Adress of string: " << &string << std::endl;
	std::cout << "Adress of PTR: " << stringPTR << std::endl;
	std::cout << "Adress of REF: " << &stringREF << std::endl;

	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of PTR: " << *stringPTR << std::endl;
	std::cout << "Value of REF: " << stringREF <<std::endl;
	return (0);
}