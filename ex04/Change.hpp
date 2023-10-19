/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Change.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:59:01 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 13:56:21 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHANGE_HPP
# define CHANGE_HPP

#include <iostream>
#include <fstream>

class Change
{
	private:
		std::string	_file;
		std::string	_find;
		std::string	_change;
	public:
		Change(std::string str, std::string find, std::string change);
		~Change(void);
		void	ft_change(void);
};

#endif
