/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:13:20 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/29 15:10:38 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Error: infile" << std::endl;
		return (1);
	}
	std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			line.erase(pos, std::string(argv[2]).length());
			line.insert(pos, argv[3]);
			pos += std::string(argv[3]).length();
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}
