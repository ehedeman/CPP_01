/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:00 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/10 11:49:21 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

//cant be a reference because those cannot
//exist without immideate initialization
class HumanB
{
private:
	Weapon *weapon;
	std::string	name;
public:
	HumanB(std::string name);
	~HumanB();
	
	void	setWeapon(Weapon &weapon);
	// void	setName(std::string name);

	// Weapon getWeapon();
	// std::string	getName();
	
	void	attack();
};


#endif