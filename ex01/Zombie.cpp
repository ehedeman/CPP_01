/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:07:37 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/04 14:01:38 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string	Zombie::getName(){return(this->name);};

// void	Zombie::destroyZombie()
// {
// 	delete(this);
// }