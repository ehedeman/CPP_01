/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:05 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/09 14:54:25 by ehedeman         ###   ########.fr       */
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
// class Weapon	HumanB::getWeapon(){return(woppie);}

// void	HumanB::setName(std::string name)
// {
// 	this->name = name;
// }

void	HumanB::setWeapon(class Weapon &woppie)
{
	this->woppie = &woppie;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their weapon" << 
	this->woppie->getType() << std::endl;
}