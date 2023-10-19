/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:05:32 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 12:47:11 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	_type = str;
}

Weapon::~Weapon(void)
{
	
}

std::string	Weapon::getType(void) const
{
	const std::string &str = _type;

	return (str);
}

void	Weapon::setType(std::string str)
{
	_type = str;
}
