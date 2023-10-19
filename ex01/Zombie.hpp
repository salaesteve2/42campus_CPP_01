/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:34:01 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/25 12:47:38 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	set_name(std::string name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
