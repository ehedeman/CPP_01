/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:05 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/10 11:47:05 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

// std::string	HumanB::getName(){return(name);}
// class Weapon	HumanB::getWeapon(){return(weapon);}

// void	HumanB::setName(std::string name)
// {
// 	this->name = name;
// }

void	HumanB::setWeapon(class Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their weapon" << 
	this->weapon->getType() << std::endl;
}