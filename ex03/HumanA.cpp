/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:05:36 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 12:46:15 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w):_weapon(w)
{
	_name = name;
}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void)
{
	if (_weapon.getType() != "")
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	else
		std::cout << _name << " not have weapon " << std::endl;
}
