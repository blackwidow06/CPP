/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:54:38 by malavaud          #+#    #+#             */
/*   Updated: 2026/08/03 16:05:16 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifnedf WRONG_ANIMAL_HPP
#define WROM_ANIMAL_HPP

class WrongAnimal
{
protected:
	std::string type;

public:
	wrongAnimal();
	~wrongAnimal();

	void makeSound() const;
};

#endif