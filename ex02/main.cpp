/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:53:22 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/24 13:03:00 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str =  "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "Direction str: " << &str << std::endl;
	std::cout << "Direction ptr: " << &stringPTR << std::endl;
	std::cout << "Direction ref: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value str: " << str << std::endl;
	std::cout << "Value ptr: " << stringPTR << std::endl;
	std::cout << "Value ref: " << stringREF << std::endl;
}
