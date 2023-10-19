/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:33:58 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/24 12:52:03 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;
	int		x;

	z = zombieHorde(2, "Salus");
	x = 0;
	while (x < 2)
	{
		z[x].announce();
		x++;
	}
	delete [] z;
}
