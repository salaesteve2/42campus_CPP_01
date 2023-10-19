/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:34:03 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/24 12:49:18 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z = new Zombie[N];
	int		x;

	x = 0;
	while (x < N)
	{
		z[x].set_name(name);
		x++;
	}
	return (z);
}
