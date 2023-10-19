/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:52:19 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 13:56:09 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Change.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error in number of arguments" << std::endl;
		return (1);
	}
	Change c = Change(argv[1], argv[2], argv[3]);
	c.ft_change();
}
