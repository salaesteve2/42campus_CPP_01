/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:04:29 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 15:14:00 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	
}

Harl::~Harl(void)
{

}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			x;

	x = 0;
	while (x < 4)
	{
		if (l[x] == level)
		{
			(this->*ptr_complain[x])();
			break ;
		}
		x++;
	}
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]: " << std::endl;
	std::cout << "“I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!”" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]: " << std::endl;
	std::cout << "“I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!”" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]: " << std::endl;
	std::cout << "“I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month.”" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]: " << std::endl;
	std::cout << "“This is unacceptable! I want to speak to the manager now.”" << std::endl;
}
