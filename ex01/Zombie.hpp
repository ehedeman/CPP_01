/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:07:40 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/04 14:26:39 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{

	private:
		std::string name;
	public:
		Zombie(){};
		~Zombie();
		
		std::string getName( void );
		void		setName(std::string name);
		
		void		announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif