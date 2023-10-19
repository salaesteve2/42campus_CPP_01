/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:05:39 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 12:46:50 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}

void	HumanB::attack(void)
{
	if (_weapon != NULL && _weapon->getType() != "")
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " not have weapon" << std::endl;
}
