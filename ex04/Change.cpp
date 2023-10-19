/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Change.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:59:04 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 14:03:21 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Change.hpp"

Change::Change(std::string str, std::string find, std::string change)
{
	_file = str;
	_find = find;
	_change = change;
}

Change::~Change(void)
{

}

void	Change::ft_change(void)
{
	std::string		str;
	int				x;
	std::string		res;
	std::ifstream file(_file);
	std::ofstream newf;
	std::string		name;

	if (!file)
	{
		std::cout << "Error opening the file" << std::endl;
		return ;
	}
	while (!file.eof())
	{
		std::getline(file, str);
		x = str.find(_find);
		while (x != std::string::npos)
		{
			str.erase(x, _find.length());
			str.insert(x, _change);
			x = str.find(_find);
		}
		res.append(str);
		if (!file.eof())
			res.append("\n");
	}
	name = "./";
	name.append(_file);
	name.append(".replace");
	newf.open(name);
	newf << res;
}
