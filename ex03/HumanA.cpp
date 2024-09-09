/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:13 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/09 14:54:21 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, class Weapon &woppie):woppie(woppie)
{
	this->name = name;
	this->woppie = woppie;
}

HumanA::~HumanA()
{
}

// std::string	HumanA::getName(){return(name);}
// class Weapon	HumanA::getWeapon(){return(woppie);}

// void	HumanA::setName(std::string name)
// {
// 	this->name = name;
// }

// void	HumanA::setWeapon(class Weapon &woppie)
// {
// 	this->woppie = woppie;
// }

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their weapon" << 
	this->woppie.getType() << std::endl;
}