/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:00 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/06 10:31:57 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *woppie;
	std::string	name;
public:
	HumanB(std::string name);
	~HumanB();
	
	void	setWeapon(Weapon &woppie);
	// void	setName(std::string name);

	// Weapon getWeapon();
	// std::string	getName();
	
	void	attack();
};


#endif