/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:44:30 by malavaud          #+#    #+#             */
/*   Updated: 2026/07/01 13:48:09 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ]I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functions[4])() =
		{
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error,
		};
	
	std::string levels[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	int i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			break;
		i++;
	}
	switch (i)
	{
    	case 0:
        	(this->*functions[0])();
    	case 1:
        	(this->*functions[1])();
    	case 2:
        	(this->*functions[2])();
    	case 3:
        	(this->*functions[3])();
        	break;
    	default:
        	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
